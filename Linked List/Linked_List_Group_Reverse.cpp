class Solution {
  public:
    //Helper function to reverse Kth times and link previous ends
      ListNode *reverseLink(ListNode* head, ListNode* prev, int k)
      {
          ListNode* previous = nullptr;
          ListNode* curr = head;        
          while (head && k--)
          {
              head = head->next;
              curr->next = previous;
              previous = curr;
              curr = head;
          }        
          if (prev)
              prev->next = previous;
          return previous;
      }
      ListNode* reverseKGroup(ListNode* head, int k) 
      {
          ListNode* previous = nullptr;
          ListNode* returnHead = nullptr;
          while(head)
          {
              int i = 1;
              ListNode* temp = head;
              for (; i < k; i++)
              {
                  if (!temp) break;
                  temp = temp->next;
              }
              if (!temp)
              {
                  if (returnHead)
                  {
                      reverseLink(head, previous, i);
                  }
                  else
                  {
                      returnHead = reverseLink(head, previous, i);
                  }
                  previous = head;
                  head = temp;
              }
              else
              {
                  temp = temp->next; //Reach next Kth first node
                  if (returnHead)
                  {
                      reverseLink(head, previous, k);
                  }
                  else
                  {
                      returnHead = reverseLink(head, previous, k);
                  }
                  previous = head;
                  head = temp;
              }
          }
          return returnHead;
      }
};
