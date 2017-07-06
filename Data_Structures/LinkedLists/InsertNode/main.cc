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

Node* Insert(Node *head,int data)
{
    Node* tmp = new Node();
    tmp->data = data;
    tmp->next = NULL;
    
    if (head == NULL) {
        return tmp;
    }
    else {
        if (head->next == NULL) {
            head->next = tmp;
            return head;
        }
        Insert(head->next, data);
        return head;
    }
}
