/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  Node *new_node;
  Node *current_node;
  new_node = new Node;
  current_node = new Node;
    
  current_node = head;
  new_node -> data = data;
    
  if(head == NULL && position == 0){
      new_node -> next = NULL;
      head = new_node;
  }
  else if(head != NULL && position == 0){
      new_node->next = current_node;
      head = new_node;
      
  }
  else{
      int current_position = 0;
      while(current_position != position && current_node != NULL){
          if(current_position == position - 1){
              if(current_node -> next == NULL){
                  new_node -> next = NULL;
                  current_node -> next = new_node;
              }
              else{
                  new_node -> next = current_node -> next;
                  current_node -> next = new_node;
                  break;
              }
              
          }
          current_position++;
          current_node = current_node -> next;
      }
  }
  
  return head;
}
