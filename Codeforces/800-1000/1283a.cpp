/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1283/A
*/
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        int h,m; cin>>h>>m;
        if(m==0){ cout << ((24-h)*60) <<'\n'; }
        else { cout << (((24-h-1)*60) + (60-m)) << '\n'; }
    }
    return 0;
}