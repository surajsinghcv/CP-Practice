long arrayManipulation(int n, vector<vector<int>> q) {
    vector<long long> v(n + 1, 0);
    for(int i = 0; i < (int)q.size(); i++)
    {
        if(q[i][0] >= 0) v[q[i][0]] += q[i][2];
        if(q[i][1] < n) v[q[i][1] + 1] -= q[i][2];
    }
    long long ma = v[0];
    for(int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
        ma = max(ma, v[i]);
    }
    return ma;
}