class Solution {
  public:
    int getMiddle(Node* head) {
        if (head == nullptr) return -1;
        int llLen = 0;
        int llMiddle = 0;
        return getMiddle(head, llLen, llMiddle);
    }
    
    int getMiddle(Node* head,  int &llLen, int &llMiddle) {
        while (head) {
            llLen++;
            llMiddle++;
            int result = getMiddle(head->next, llLen, llMiddle);
            if (llLen > llMiddle / 2) {
                llLen--;
                return head->data;
            }
            return result;
        }
        return -1;
    }
};
