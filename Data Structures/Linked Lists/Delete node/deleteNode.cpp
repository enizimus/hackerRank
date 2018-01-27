/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node *Delete(Node *head, int position) {

	Node *new_head;
	new_head = new Node;

	int current_position = 0;

	if (head != NULL && position == 0) {

		new_head = head->next;
		free(head);
	}
	else if (head == NULL) {
		new_head = NULL;
	}
	else {
		Node *node_iter;
		node_iter = new Node;
		node_iter = head;
		while (current_position + 1 != position && node_iter != NULL) {
			node_iter = node_iter->next;
			current_position++;
		}

		new_head = head;
		head = node_iter->next->next;
		free(node_iter->next);
		node_iter->next = head;

	}

	return new_head;
}