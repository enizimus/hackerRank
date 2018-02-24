/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
	while (headA) {
		Node *new_headB = new Node;
		new_headB = headB;
		while (new_headB->next){
			if (new_headB->next->data == headA->next->data) {
				return headA->next->data;
			}
			new_headB = new_headB->next;
		}

		headA = headA->next;
	}
	return 0;
}