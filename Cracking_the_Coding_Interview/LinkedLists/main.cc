/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if (head != NULL) {
        Node* slowNode = head;
        Node* fastNode = head;

       do {
            if ( fastNode->next == NULL || fastNode->next->next == NULL || slowNode->next == NULL) {
                return false;
            }

            slowNode = slowNode->next;
            fastNode = fastNode->next->next;
        } while (slowNode != fastNode);

        return true;
    }
    return false;
}
