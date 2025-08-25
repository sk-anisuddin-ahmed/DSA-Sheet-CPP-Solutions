class Solution 
{
  public:
    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* curr = head;
        Node* next = NULL;
        do {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        } while (curr != head);
        head->next = prev;
        return prev;
    }
    
    Node* deleteNode(Node* head, int key)
    {
        Node* trav = head;
        
        if (head->data == key)
        {
            Node* headLink = head->next;
            if (trav->next == head) return NULL;
            while (trav->next != head)
            {
                trav = trav->next;
            }
            trav->next = headLink;
            return headLink;
        }
        else
        {
            while (1)
            {
                if (trav->next->data == key)
                {
                    if (trav->next == head)
                    {
                        trav->next = trav->next->next;
                        head = trav->next;
                    }
                    else
                    {
                        trav->next = trav->next->next;
                    }
                    break;
                }
                if (trav->next == head)
                {
                    break;
                }
                trav = trav->next;
            }
        }
        return head;
    }
};
