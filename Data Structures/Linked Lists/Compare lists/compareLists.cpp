/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
	bool end_not_reached = true;

	if (headA == NULL && headB == NULL)
		return 1;
	else if (headA == NULL && headB != NULL)
		return 0;
	else if (headA != NULL && headB == NULL)
		return 0;
	else {
		while (end_not_reached) {
			if (headA->data == headB->data) {

				if (headA->next == NULL || headB->next == NULL) {
					end_not_reached = false;
					break;
				}
				headA = headA->next;
				headB = headB->next;
			}
			else {
				return 0;
			}
		}

		if (!end_not_reached) {
			if (headA->next == headB->next && headA->next == NULL)
				return 1;
			else
				return 0;
		}
	}
	return 0;
}
