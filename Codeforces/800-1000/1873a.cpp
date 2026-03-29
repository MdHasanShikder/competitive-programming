/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1873/A
*/
#include <iostream>
#include <string>
using namespace std;
void solve(){
    string s; cin>>s;
    int move = 0;
    if(s[0] != 'a') move++;
    if(s[1] != 'b') move++;
    if(s[2] != 'c') move++;
    //2 move = 1 swap
    cout << (move > 2 ? "NO\n" : "YES\n");
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}