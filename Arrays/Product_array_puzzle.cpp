class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) 
    {
        int totalMul = 1;
        int zeroCount = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                zeroCount++;
                if (zeroCount == 2)
                {
                    break;
                }
            }
            else
            {
                totalMul *= arr[i];
            }
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (zeroCount == 2)
            {
                arr[i] = 0;
            }
            else  if (zeroCount == 1)
            {
                if (arr[i] == 0)
                {
                    arr[i] = totalMul;
                }
                else
                {
                    arr[i] = 0;
                }
            }
            else
            {
                arr[i] = (totalMul / arr[i]);
            }
        }
        return arr;
    }
};