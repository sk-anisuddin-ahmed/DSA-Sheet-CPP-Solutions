class Solution {
  public:
    DLLNode* reverseDLL(DLLNode* head) {
        DLLNode* temp = head;
        while (head) {
            temp = head->prev;
            head->prev = head->next;
            head->next = temp;
            if (head->prev)
                head = head->prev;
            else 
                return head;
        }
        return temp;
    }
};
