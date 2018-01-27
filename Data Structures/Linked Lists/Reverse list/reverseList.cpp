/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node *Reverse(Node *head) {
	
	if (head == NULL || head->next == NULL) {
		return head;
	}
	else {
		Node *prev_node = new Node;
		Node *next_node = new Node;

		prev_node = head;
		head = prev_node->next;
		next_node = head->next;

		prev_node->next = NULL;
		head->next = prev_node;


		while (next_node != NULL) {
			
			prev_node = head;
			head = next_node;
			next_node = head->next;

			head->next = prev_node;

		}
		return head;
	}
}
