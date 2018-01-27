/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node *head) {

	if (!head || !head->next)
		return false;
	else {
		Node *iter_node = new Node;
		Node *current_node = new Node;
		current_node = head->next;
		iter_node = head;

		while (iter_node->next) {
			current_node = head;
			while (current_node != iter_node) {
				if (current_node == iter_node->next) {
					return true;
				}

				current_node = current_node->next;

			}
			iter_node = iter_node->next;
		}
	}

	return false;
	
}
