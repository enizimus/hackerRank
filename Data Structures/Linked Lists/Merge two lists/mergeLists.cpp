/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node *MergeLists(Node *headA, Node *headB) {
	if (!headA || !headB)
		return headB ? headB : headA;
	else {
		Node *new_head = new Node;

		if (headA->data < headB->data) {
			new_head = headA;
			headA = headA->next;
		}
		else {
			new_head = headB;
			headB = headB->next;
		}

		Node *temp_node = new Node;
		temp_node = new_head;

		while (headA || headB) {

			if (headA && (!headB || headA->data < headB->data)) {
				temp_node->next = headA;
				headA = headA->next;
			}
			else {
				temp_node->next = headB;
				headB = headB->next;
			}

			temp_node = temp_node->next;


		}
		return new_head;
	}
}
