
// https://www.hackerrank.com/challenges/dynamic-programming-classics-the-longest-common-subsequence/problem

#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n >> m;

    int x[n + 1], y[m + 1];
    x[0] = 0;
    y[0] = 0;

    for(int i = 1; i <= n; i++){
        cin>>x[i];
    }
    for(int i = 1; i <= m ;i ++){
        cin>>y[i];
    }

    int arr[n + 1][m + 1], b [n + 1][m + 1];

    for(int i = 0; i <= n; i++){
        arr[i][0] = 0;
        b[i][0] = 0;
    }
    for(int i = 0; i<= m; i++){
        arr[0][i] = 0;
        b[0][i] = 0;
    }

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m ;j ++){
            b[i][j] = 0;
            if(x[i] == y[j]){
                arr[i][j] = 1 + arr[i -1][j - 1];
                b[i][j] = 7;
            }
            else{
                if(arr[i - 1][j] >= arr[i][j - 1]){
                    arr[i][j] = arr[i -1][j];
                    b[i][j] = 8;
                }
                else{
                    arr[i][j] = arr[i][j - 1];
                    b[i][j] = 4;
                }
            }
        }
    }


    stack<int> s;

    while(n != 0 && m!= 0){
        if(b[n][m] == 7){
            s.push(x[n]);
            n--;
            m--;
        }
        else if(b[n][m] == 8){
            n--;
        }
        else if(b[n][m] == 4){
            m--;
        }
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}
