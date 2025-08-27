class Solution {
  public:
    Node* ReverseLL(Node* Head)
    {
        Node* prev = NULL;
        Node* curr = Head;
        Node* temp = NULL;
        
        while (curr)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    
    Node* addOne(Node* head) 
    {
        if (head == NULL) return head;
        
        head = ReverseLL(head);
        Node* trav = head;
        bool carry = 0;
        bool addOne = true;
        while (trav)
        {
            int addVal = trav->data + addOne + carry;
            addOne = 0;
            trav->data = addVal % 10;
            carry = (addVal > 9);
            if (carry > 0 && trav->next == NULL)
            {
                trav->next = new Node(carry);
                break;
            }
            trav = trav->next;
        }
        return ReverseLL(head);
    }
};