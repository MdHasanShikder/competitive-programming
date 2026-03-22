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
        cout << (s[0]+s[1]+s[2] == s[3]+s[4]+s[5] ? "YES\n" : "NO\n" );
    }
    return 0;
}