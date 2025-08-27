class Solution {
  public:
    bool isPowerofTwo(long long n) {
        bool out = 1;
        if (!n)
        {
            return 0;
        }
        while (n > 1)
        {
            if (n % 2)
            {
                out = 0;
                break;
            }
            n = n / 2;
        }
        return out;
    }
};