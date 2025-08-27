class Solution {
  public:
    bool detectLoop(Node* head) 
    {
        Node* slow = head;
        Node* fast = head;
        int delay = 0;
        while (slow && fast)
        {
            if (delay++ >= 2)
            {
                delay = 0;
                slow = slow->next;
            }
            fast = fast->next;
            if (slow == fast)
            {
                return 1;
            }
        }
        return 0;
    }
};