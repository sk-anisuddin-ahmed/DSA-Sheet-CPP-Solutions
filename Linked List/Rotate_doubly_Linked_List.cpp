class Solution {
  public:
    Node *rotateDLL(Node *head, int p) {
        if (!head || p == 0) {
            return head;
        }
        
        Node *temp = head;
        int length = 1;
        while (temp->next) {
            temp = temp->next;
            length++;
        }
        p = p % length;
        if (p == 0) {
            return head;
        }
        
        temp = head;
        Node *newHead = head;
        while (temp) {
            if (temp->next) {
                temp = temp->next;
            }
            else {
                break;
            }
            if (p) {
                p--;
                newHead = temp;
            }
        }
        if (p == 0) {
            head->prev = temp;
            temp->next = head;
            newHead->prev->next = nullptr;
            newHead->prev = nullptr;
            return newHead;
        }
        return head;
    }
};