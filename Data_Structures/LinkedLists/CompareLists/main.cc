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
    if (headA == NULL && headB == NULL) {
        return true;
    }
    if (headA == NULL || headB == NULL) {
        return false;
    }
    if (headA->data != headB->data) {
        return false;
    }
    return CompareLists(headA->next, headB->next);

}
