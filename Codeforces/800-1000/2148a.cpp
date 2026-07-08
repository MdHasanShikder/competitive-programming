/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2148/A
*/
#include <iostream>
using namespace std;
void solve(){
    int x,n; cin>>x>>n;
    cout << (n%2==0 ? 0 : x) << '\n';
}   
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}