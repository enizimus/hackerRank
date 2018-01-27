/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head, int positionFromTail) {
	Node *slow = new Node;
	Node *fast = new Node;

	slow = head;
	fast = head;

	while (positionFromTail > 0) {
		fast = fast->next;
		positionFromTail--;
	}

	while (fast->next)
	{
		slow = slow->next;
		fast = fast->next;
	}

	return slow->data;
}
