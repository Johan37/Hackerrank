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
Node* Reverse(Node *head)
{
  Node *newHead = NULL;
  Node *t;
  
  while (head != NULL) {
    t = head->next;
    head->next = newHead;
    newHead = head;
    head = t;
  }
  return newHead;
}