
// 1394. Find Lucky Integer in an Array

class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> fre(501, 0);
        for(int i = 0; i < arr.size(); i++)
        {
            fre[arr[i]]++;
        }
        for(int i = 500; i >= 1; i--)
        {
            if(fre[i] == i)
            {
                return i;
            }
        }
        return -1;
    }
};