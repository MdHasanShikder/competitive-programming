/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1335/A
*/
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        cout << (n-1)/2 <<endl;
    }
    return 0;
}