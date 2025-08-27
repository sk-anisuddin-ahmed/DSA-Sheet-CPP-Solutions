class Solution {
  public:
    Node* reverseList(struct Node* head) 
    {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        Node* newhead = reverseList(head->next);
        head->next->next = head;
        head->next = nullptr;
        return newhead;
    }
};