/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1926/A
*/
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int a=0, b=0;
        for(int i=0; i<5; i++){
            s[i]=='A' ? a++ : b++;
        }
        cout << (a>b ? "A\n" : "B\n" );
    }
    return 0;
}