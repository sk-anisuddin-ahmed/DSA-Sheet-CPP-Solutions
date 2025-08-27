
/* The structure of the Linked list Node is as follows:

struct Node
{
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=NULL;
    }
};

*/

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        Node* newList = nullptr;
        Node* newListHead = nullptr;
        while (head1 && head2) {
            if (head1 && head1->data < head2->data) {
                head1 = head1->next;
            }
            else if (head2 && head2->data < head1->data) {
                head2 = head2->next;
            }
            else if (head1->data == head2->data){
                if (newList) {
                    newList->next = new Node(head1->data);
                    newList = newList->next;
                }
                else {
                    newList = new Node(head1->data);
                    newListHead = newList;
                }
                head1 = head1->next;
                head2 = head2->next;
            }
        }
        return newListHead;
    }
};
