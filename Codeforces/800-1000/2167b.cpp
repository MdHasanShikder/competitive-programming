/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2167/B
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void solve(){
    int n; cin>>n;
    string s,t; cin>>s>>t;
    //sorting them to compare
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    cout << (s==t ? "YES\n": "NO\n");
}
int main(){
    int q; cin>>q;
    while(q--){
        solve();
    }
    return 0;
}