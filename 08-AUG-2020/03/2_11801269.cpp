class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int r = 0, l = 0, n = nums.size();
        for(int i = 0; i < n; i++)
        {
            r += nums[i];
        }
        
        for(int i = 0; i < n; i++)
        {
            r -= nums[i];
            if(r == l)
            {
                return i;
            }
            l += nums[i];
        }
        return -1;
    }
};