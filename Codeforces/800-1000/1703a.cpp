/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1703/A
*/
#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s; cin>>s;
    cout<<(((s[0]=='y' || s[0]=='Y') && (s[1]=='e' || s[1]=='E') && (s[2]=='s' || s[2]=='S')) ? "YES\n" : "NO\n");
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}