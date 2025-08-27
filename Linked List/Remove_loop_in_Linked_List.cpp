class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) 
    {
        Node* prev = nullptr;
        unordered_set <Node*> hash;
        while (head)
        {
            if (hash.find(head) == hash.end())
            {
                hash.insert(head);
                prev = head;
                head = head->next;
            }
            else
            {
                prev->next = nullptr;
                break;
            }
        }
    }
};