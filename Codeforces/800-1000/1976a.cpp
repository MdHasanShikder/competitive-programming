/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1976/A
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;

        string k = s; //storing the given string
        sort(k.begin(),k.end());    //sorting in this order: cda32be => 123abcde
        cout << (k==s ? "YES\n" : "NO\n");
    }
    return 0;
}