/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2044/B
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        string s; cin>>s;

        string k = s;
        
        reverse(k.begin(), k.end()); //reversed, cause other side of the mirror
        for(int i=0; i<(int)k.size(); i++){ //mirroring the string: only p and q changes, not the w
            if(k[i]=='p') k[i]='q';
            else if(k[i]=='q') k[i]='p';
        }
        cout<<k<<'\n';
    }
    return 0;
}