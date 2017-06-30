/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    if (head == NULL) {
        return false;
    }

    Node* slow_node = head;
    Node* fast_node = head;

    while (fast_node != NULL && fast_node->next != NULL) {
        slow_node = slow_node->next;
        fast_node = fast_node->next->next;
        if (slow_node == fast_node) {
            return true;
        }
    }
    return false;
}
