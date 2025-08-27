class solution {
  public:
    long long multiplyTwoLists(Node *first, Node *second) {
        long long x = 0;
        long long y = 0;
        long long m = 1000000007;
        int mul = 1;
        while (first) {
            x = ((x*10) + first->data)%m;
            first = first->next;
        }
        while (second) {
            y = ((y*10) + second->data)%m;
            second = second->next;
        }
        return (x*y)%m;
    }
};