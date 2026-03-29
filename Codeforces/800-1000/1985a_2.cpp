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
    string dummy = s; //made clone of string s
    s[0] = k[0];    //changed the first index of s
    k[0] = dummy[0];    //changed the first index of k
    cout<<s<<" "<<k<<'\n';  //printed
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}