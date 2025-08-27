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
    Node* reverse(struct Node* head) {
        return reverseList(head);
    }
    
    Node *compute(Node *head) {
        head = reverse(head);
        Node* temp = head;
        Node* returnNode = temp;
        while (temp->next) {
            if (temp->data > temp->next->data) {
                temp->next = temp->next->next;
            }
            else {
                returnNode = temp->next;
                temp = temp->next;
            }
        }
        head = reverse(head);
        return returnNode;
    }
};
