/*
    author: hasan2
    problem link: https://codeforces.com/contest/1760/problem/a
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int a,b,c; cin >> a >> b >> c;
        cout << ((a+b+c)-(max(a,max(b,c)))-(min(a,min(b,c)))) << endl;
    }
    return 0;
}