
// https://leetcode.com/problems/first-missing-positive/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int size = nums.size();

        vector<bool> v(size + 5, 0);
        for(auto i : nums)
        {
            if(i > 0 && i < size + 5) v[i] = 1;
        }
        int i;
        for(i = 1; i <= size + 4; i++)
        {
            if(!v[i])
            {
                return i;
            }
        }
        return i;
    }
};