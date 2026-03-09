/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/41/A
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);

    string s,t; cin>>s>>t;

    int len1=s.length();
    int len2=t.length();
    if(len1 != len2){ cout<<"NO"<<endl; return 0; }
    for(int i=0; i<len1; i++){
        if(t[i] != s[len1-i-1]){ cout<<"NO"<<endl; return 0;}
    }
    cout<<"YES"<<endl;
    return 0;
}