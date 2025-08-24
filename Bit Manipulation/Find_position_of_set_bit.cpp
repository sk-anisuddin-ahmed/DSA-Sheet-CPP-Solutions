class Solution {
  public:
    int findPosition(int n) {
        if (n == 0 || (n & (n - 1)) != 0)
            return -1;
        int pos = 0;
        while (n)
        {
            pos++;
            n >>= 1;
        }
        return pos;
    }
};