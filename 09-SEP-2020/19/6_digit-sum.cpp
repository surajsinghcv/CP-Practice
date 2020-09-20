
// https://www.hackerrank.com/challenges/recursive-digit-sum/problem

#include <iostream>
#include <string>

using namespace std;

int cal(int sum){
    int ret = 0;
    int m;
    int k;
    while(sum > 9){
        ret = 0; 
        while(sum){
            m = (sum % 10);
            sum = sum / 10;   
            ret += m;
        }
        sum = ret; 
    }
    return sum;
}

int process(string & str){
    int sum = 0;
    int len = str.length();
    int i = 0;
    if (str == ""){
        return 0;
    }
    for (i = 0; i < len; i++){
        int c = (str[i] - '0');
        sum = sum + c;
        sum = cal(sum);
    }
    return sum;
}

int main(int argc, char* argv[]){
    string n, k;
    cin >> n >> k;

    int a = process(n);
    int b = process(k);
    int c = a*b;
    cout << cal(c) << endl;
    return 0;
}