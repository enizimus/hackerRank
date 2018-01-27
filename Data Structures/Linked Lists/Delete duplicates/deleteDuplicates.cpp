/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node *RemoveDuplicates(Node *head) {

	Node *temp_node = new Node;
	temp_node = head;

	while (temp_node) {
		Node *duplicate_node = new Node;
		Node *help_node = new Node;
		duplicate_node = temp_node->next;
		help_node = duplicate_node;
		while (duplicate_node && duplicate_node->data == temp_node->data ) {
			help_node = duplicate_node;
			duplicate_node = duplicate_node->next;
			free(help_node);
		}
		temp_node->next = duplicate_node;
		temp_node = temp_node->next;
	}

	return head;

}

