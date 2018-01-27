/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node *Insert(Node *head, int data){
    Node *new_node;
    Node *new_head;

    new_node = new Node;
    new_head = head;

    new_node->data = data;
    new_node->next = NULL;

    if(head == NULL){
        head = new_node;
    }
    else{
         while(new_head->next != NULL){
        new_head = new_head->next;
        }
        new_head->next = new_node;
    }

    return head;
}