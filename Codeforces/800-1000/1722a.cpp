/*
    author: hasan2
    problem link: https://codeforces.com/contest/1722/problem/a
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string m = "Timur";
        sort(s.begin(), s.end());
        sort(m.begin(), m.end());
        cout << (m == s ? "YES" : "NO") << endl;
    }
    return 0;
}