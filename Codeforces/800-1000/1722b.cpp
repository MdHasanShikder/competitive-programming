/*
    author: hasan2
    problem link: https://codeforces.com/contest/1722/problem/b
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string m,k; cin >> m >> k;

        for(char &c : m) if(c == 'G') c = 'B';
        for(char &d : k) if(d == 'G') d = 'B';
        
        cout << (m == k ? "YES" : "NO") << endl;
    }
    return 0;
}