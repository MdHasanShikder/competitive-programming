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
        for(int i=0; i<3; i++){ sum1 += s[i]-'0'; }
        for(int i=3; i<6; i++){ sum2 += s[i]-'0'; }
        cout << (sum1 == sum2 ? "YES\n" : "NO\n" );
    }
    return 0;
}