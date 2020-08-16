int makingAnagrams(string s1, string s2) {
    vector<int> v(26, 0);
    for(int i = 0; i < s1.size(); i++)
    {
        v[s1[i] - 'a']++;
    }
    for(int i = 0; i < s2.size(); i++)
    {
        v[s2[i] - 'a']--;
    }
    int sum = 0;
    for(int i = 0; i < 26; i++)
    {
        sum += abs(v[i]);
    }
    return sum;
}