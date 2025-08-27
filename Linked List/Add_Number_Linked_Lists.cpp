class Solution {
  public:
    Node* reverse (Node* head) 
    {
        Node* prev = nullptr;
        Node* curr = head;
        while (curr != nullptr) 
        {
            Node* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev; // New head
    }
  
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        Node* Num1 = reverse(num1);
        Node* Num2 = reverse(num2);
        
        Node* result = nullptr;
        Node* returnHead = nullptr;
        
        int carry = 0;
        
        while (Num1 || Num2 || carry) 
        {
            int sum = carry;

            if (Num1) 
            {
                sum += Num1->data;
                Num1 = Num1->next;
            }
            if (Num2) 
            {
                sum += Num2->data;
                Num2 = Num2->next;
            }
            
            carry = sum / 10;
            if (result)
            {
                result->next = new Node(sum % 10);
                result = result->next;
            }
            else
            {
                result = new Node(sum % 10);
                returnHead = result;
            }
        }
        returnHead = reverse(returnHead);
        while (returnHead->data == 0)
        {
            returnHead = returnHead->next;
        }
        return returnHead;
    }
};
