/*
  Delete Node at a given position in a linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    if (position == 0) {
        Node* tmp_node = head->next;
        delete head;
        return tmp_node;
    }
    if (head == NULL) {
        return head;
    }

    int current_position = 1;
    Node* current_node = head;
    while(current_position < position ) {
        if (current_node->next == NULL) {
            break;
        }
        current_node = current_node->next;
        current_position++;
    }

    Node* tmp_node = current_node->next;
    current_node->next = current_node->next->next;
    delete tmp_node;

    return head;
}
