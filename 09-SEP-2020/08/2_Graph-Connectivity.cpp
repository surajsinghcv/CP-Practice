
// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=99999999&page=show_problem&category=0&problem=400&mosmsg=Submission+received+with+ID+25466279

#include <stdio.h>

int p[26], r[26];
void init(int n)
{
    while(n >= 0) 
    {
        p[n] = n, r[n] = 1;
        n--;
    }
}
int find(int x)
{
    return p[x] == x ? x : (p[x]=find(p[x]));
}
int Union(int x, int y)
{
    x = find(x), y = find(y);
    if(x != y)
    {
        if(r[x] > r[y])
            r[x] += r[y], p[y] = x;
        else
            r[y] += r[x], p[x] = y;
        return 1;
    }
    return 0;
}
int main()
{
    int t;
    char s[10];
    scanf("%d ", &t);
    while(t--)
    {
        gets(s);
        init(s[0]-'A');
        int ans = s[0]-'A'+1;
        while(gets(s))
        {
            if(s[0] == '\0')
                break;
            ans -= Union(s[0]-'A', s[1]-'A');
        }
        printf("%d\n", ans);
        if(t)
            puts("");
    }
    return 0;
}