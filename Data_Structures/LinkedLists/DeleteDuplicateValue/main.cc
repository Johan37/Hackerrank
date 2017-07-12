/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    Node* current = head;
    while (current != NULL && current->next != NULL) {
        if (current->data == current->next->data ) {
            Node* tmp = current->next;
            current->next = current->next->next;
            delete tmp;
        }
        else {
            current = current->next;
        }
    }
    return head;
}
