/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1220/A
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int sz; cin>>sz;
    string s; cin>>s;

    int z = 0, n = 0;
    for(int i=0; i<sz; i++){
        if(s[i]=='z') { z++; }
        else if(s[i]=='n') { n++; }
    }
    
    for(int i=0; i<n; i++){
        if(i!=0) cout<<" ";
        cout<<"1";
    }
    for(int i=0; i<z; i++){
        if(n>0) cout<<" ";
        else if(i!=0) cout<<" ";
        cout<<"0";
    }
    return 0;
}