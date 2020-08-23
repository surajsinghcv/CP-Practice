
// https://leetcode.com/problems/most-profit-assigning-work/

class solve
{
    public:
    int diff;
    int profit;
};

bool cmp(solve a, solve b)
{
    return a.profit < b.profit;
}

class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<solve> v(profit.size());
        for(int i = 0; i < profit.size(); i++)
        {
            v[i].diff = difficulty[i];
            v[i].profit = profit[i];
        }
        
        sort(v.rbegin(), v.rend(), cmp);
        sort(worker.rbegin(), worker.rend());
        
        int maw = 0, count, ans = 0;
        
        for(int i = 0; i < v.size(); i++)
        {
            count = 0;
            while(maw < worker.size() && v[i].diff <= worker[maw])
            {
                count++;
                maw++;
            }
            ans += count * v[i].profit;
        }
        return ans;
    }
};