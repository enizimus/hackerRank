/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include<vector>
void ReversePrint(Node *head) {
	vector<int> arr;

	while (head != NULL) {
		arr.push_back(head->data);
		head = head->next;
	}

	for (int i = arr.size() - 1; i >= 0; i--)
		cout << arr[i] << endl;

}
