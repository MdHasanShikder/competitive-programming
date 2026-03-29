/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1985/A
*/
#include <iostream>
#include <string>
//#include <algorithm>
using namespace std;
void solve(){
    string s,k; cin>>s>>k;
    swap(s[0],k[0]);
    cout<<s<<" "<<k<<'\n';
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}