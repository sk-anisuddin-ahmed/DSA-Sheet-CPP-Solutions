class Solution {
  public:
    int minValue(Node* root) {
        if (root == nullptr) return 0;
            
            if (root->left) {
                return minValue(root->left);
            }
        return root->data;
    }
};
