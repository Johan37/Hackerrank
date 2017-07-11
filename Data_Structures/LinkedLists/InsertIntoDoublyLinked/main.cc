/*
    Insert Node in a doubly sorted linked list
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/

Node* createNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

Node* SortedInsert(Node *head,int data)
{
    if (head == NULL) {
        return createNode(data);
    }

    if (data < head->data) {
        Node* node = createNode(data);
        node->next = head;
        head->prev = node;
        return node;
    }
    else {
        head->next = SortedInsert(head->next, data);
        head->next->prev = head;
        return head;
    }
}
