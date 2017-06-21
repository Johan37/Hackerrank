#include <iostream>
#include <cstddef>

using namespace std;	

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            }
            else {
                Node* cur;
                if(data <= root->data){
                    cur = insert(root->left, data);
                    root->left = cur;
                }
                else{
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }

		/*The tree node has data, left child and right child 
		class Node {
			int data;
			Node* left;
			Node* right;
		};
		*/
		
		int height(Node* root) {
			int left_height = 0;
			int right_height = 0;

			if (root->left != NULL) {
				left_height = height(root->left) + 1;
			}
			if (root->right != NULL) {
				right_height = height(root->right) +1;
			}
			return left_height > right_height ? left_height : right_height;
		}
 
 }; //End of Solution

int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;

    cin >> t;

    while(t-- > 0){
        cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.height(root);
    cout << height;

    return 0;
}