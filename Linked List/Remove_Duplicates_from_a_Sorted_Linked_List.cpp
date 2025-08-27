class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if (head == nullptr) return nullptr;
        Node* tempPrev = nullptr;
        Node* temp = head;
        int compareVal = head->data;
        while (temp->next) {
            tempPrev = temp;
            temp = temp->next;
            if (temp->data == compareVal) {
                if (tempPrev) tempPrev->next = temp->next;
                delete temp;
                temp = tempPrev;
            }
            else {
                compareVal = temp->data;
            }
        }
        return head;
    }
};