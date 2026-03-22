/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1676/A
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int sum1 = 0, sum2 = 0;
        sum1 = (s[0]-'0') + (s[1]-'0') + (s[2]-'0');
        sum2 = (s[3]-'0') + (s[4]-'0') + (s[5]-'0');
        cout << (sum1 == sum2 ? "YES\n" : "NO\n" );
    }
    return 0;
}