
// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        
        int i = 0, j = 0, count = arr1.size();
        
        while(i < arr1.size() && j < arr2.size())
        {
            if(abs(arr1[i] - arr2[j]) <= d)
            {
                count--;
                i++;
            }
            else if(arr1[i] < arr2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }
        
        return count;
    }
};