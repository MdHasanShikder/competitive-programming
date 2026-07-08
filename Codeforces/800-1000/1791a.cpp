/*
    author: hasan2
    problem link: https://codeforces.com/contest/1791/problem/a
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        char s; cin >> s;
        string m = "codeforces";
        bool appear = false;
        for(char c : m){
            if(c == s) appear = true;
        }
        cout << (appear ? "YES" : "NO") << endl;
    }
    return 0;
}