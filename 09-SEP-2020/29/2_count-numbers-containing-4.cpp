
// https://practice.geeksforgeeks.org/problems/count-numbers-containing-43022/1

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int count = 0, temp;
        for(int i = 1; i <= n; i++)
        {
            temp = i;
            while(temp)
            {
                if(temp % 10 == 4)
                {
                    count++;
                    break;
                }
                temp /= 10;
            }
        }
        return count;
    }
};