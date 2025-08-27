class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        unordered_set <int> hash;
        Node* tempPrev = nullptr;
        Node* temp = head;
        while (temp) {
            if (hash.find(temp->data) != hash.end()) {
                if (tempPrev) tempPrev->next = temp->next;
                delete temp;
                temp = tempPrev;
            }
            else {
                hash.insert(temp->data);
            }
            tempPrev = temp;
            temp = temp->next;
        }
        return head;
    }
};
