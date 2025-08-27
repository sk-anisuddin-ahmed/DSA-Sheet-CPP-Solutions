class Solution {
  public:
    // Function to find minmum value in BST.
    int minValue(Node* node) {
        if (node == nullptr) return 0;
        
        if (node->left) {
            return minValue(node->left);
        }
        return node->data;
    }
    // Function to delete a node from BST.
    Node *deleteNode(Node *root, int X) {
        if (root == nullptr) {
            return nullptr;
        }
        
        if (root->data == X) {
            if (root->left == nullptr && root->right == nullptr) {
                delete root;
                return nullptr;
            }
            if (root->left == nullptr && root->right) {
                delete root;
                return root->right;
            }
            if (root->left && root->right == nullptr) {
                delete root;
                return root->left;
            }
            if (root->left && root->right) {
                int minVal = minValue(root->right);
                root->right = deleteNode(root->right, minVal);
                root->data = minVal;
                return root;
            }
        }
        else if (X < root->data) {
            root->left = deleteNode(root->left,X);
        }
        else {
            root->right = deleteNode(root->right,X);
        }
        return root;
    }
};