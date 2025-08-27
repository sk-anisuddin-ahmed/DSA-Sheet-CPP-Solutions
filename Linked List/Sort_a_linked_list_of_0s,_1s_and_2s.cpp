class Solution {
  public:
    Node* segregate(Node* head) 
    {
        Node* trav = NULL;
        auto val = head->data;
        val = 2;
        
        while (val >= 0)
        {
            trav = head;
            while (trav->next)
            {
                if (trav->next->data == val)
                {
                    auto tempNode = trav->next;
                    trav->next = tempNode->next;
                    tempNode->next = head;
                    head = tempNode;
                }
                else
                {
                    trav = trav->next;
                }
            }
            val--;
        }
        
        return head;
    }
};