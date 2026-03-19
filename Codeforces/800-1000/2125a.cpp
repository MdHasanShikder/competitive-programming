/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2125/A
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        sort(s.begin(),s.end(),greater<char>()); //sorting in descending order so the problem becomes easy
        cout<<s<<endl;
    }
    return 0;
}