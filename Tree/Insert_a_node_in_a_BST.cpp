class Solution {
  public:
    Node* insert(Node* node, int key) {
        if (node == nullptr) {
            return new Node(key);
        }
        
        if (key < node->data) {
            node->left = insert(node->left, key);
            
        }
        else if (key > node->data) {
            node->right = insert(node->right, key);
        }
        return node;
    }
};
