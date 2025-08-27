class Solution {
  public:
    Node *moveToFront(Node *head) {
        // code here
        if (head->next == nullptr) return head;
        Node* temp = head;
        Node* tail = head;
        while (temp->next) {
            tail = temp;
            temp = temp->next;
        }
        temp->next = head;
        tail->next = nullptr;
        return temp;
    }
};