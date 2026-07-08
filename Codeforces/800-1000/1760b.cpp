/*
    author: hasan2
    problem link: https://codeforces.com/contest/1760/problem/b
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
        char max = s[0];
        for(int i=1; i<n; i++){
            if(s[i] > max) max = s[i];
        }
        cout << max - 'a' + 1 << endl;
    }
    return 0;
}