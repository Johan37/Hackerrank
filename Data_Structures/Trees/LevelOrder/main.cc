/*
struct node
{
    int data;
    node* left;
    node* right;
}*/
int getHeight(node* root) {
    int left_height = 0;
    int right_height = 0;

    if (root->left != NULL) {
        left_height = getHeight(root->left) + 1;
    }
    if (root->right != NULL) {
        right_height = getHeight(root->right) +1;
    }
    return left_height > right_height ? left_height : right_height;
}

void printGivenLevel(node * tree, int level) {
    if (tree == NULL) {
        return;
    }
    if (level == 0) {
        cout << tree->data << " ";
    }
    else {
        printGivenLevel(tree->left, level -1);
        printGivenLevel(tree->right, level -1);
    }
}

void levelOrder(node * root) {
    int height = getHeight(root);
    for (int i = 0; i <= height; i++) {
        printGivenLevel(root, i);
    }
}
