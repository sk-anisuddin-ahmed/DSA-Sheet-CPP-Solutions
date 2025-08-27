class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        if (!head) return -1;
        int counter = k;
        return getKthFromLast(head, k, counter);;
    }
  
    int getKthFromLast(Node *head, int k, int &counter) {
        
        while (head) {
            int result = getKthFromLast(head->next, k, counter);
            counter--;
            if (counter == 0) {
                return head->data;
            }
            return result;
        }
        return -1;
    }
};
