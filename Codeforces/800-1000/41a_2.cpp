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
    int len=s.length();

    string m(len, ' '); //size is len, filled with spaces
    //you can't assign characters by indexing in an empty string, so it must have preoccupied, then changing the elements would be appropriate

    for(int i=0; i<len; i++){ 
        m[i]=s[len-1-i];
    }
    if(m==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}