class Solution {
  public:
    bool isCircular(Node *head) {
        if (head == nullptr) return false;
        Node* temp = head;
        while (temp) {
            temp = temp->next;
            if (temp == head) {
                return true;
            }
        }
        return false;
    }
};
