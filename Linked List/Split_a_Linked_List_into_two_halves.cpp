class Solution {
  public:
    pair<Node *, Node *> splitList(struct Node *head) {
        Node* temp = head;
        Node* Node2 = nullptr;
        Node* tempPrev = nullptr;
        int length = 0;
        while (temp) {
            length++;
            if (temp->next == head) break;
            temp = temp->next;
        }
        int end = (length / 2) + (length % 2 > 0);
        temp = head;
        for (int i = 1; i < end; i++) {
            temp = temp->next;
        }
        Node2 = temp->next;
        temp->next = head;
        temp = Node2;
        while (temp) {
            if (temp->next == head) {
                temp->next  = Node2;
                break;
            }
            temp = temp->next;
        }
        return {head, Node2};
    }
};
