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
    Node* insert_node = new Node;
    insert_node->data = data;

    if (head == NULL) {
        return insert_node;
    }

    if(position == 0) {
        insert_node->next = head;
        return insert_node;
    }

    int current_pos = 1;
    Node* current_node = head;
    while (current_pos < position) {
        if (current_node->next == NULL) {
            break;
        }
        current_node = current_node->next;
        current_pos++;
    }

    insert_node->next = current_node->next;
    current_node->next = insert_node;

    return head;

}
