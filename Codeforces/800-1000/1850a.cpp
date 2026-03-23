/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1850/A
*/
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        cout<<(((a+b>=10) || (b+c>=10) || (a+c>=10)) ? "YES\n" : "NO\n");
    }
    return 0;
}