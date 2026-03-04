/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1703/B
*/
//concept: set
#include<iostream>
#include<string>
#include<set>
using namespace std;
void solve(){
    int n;
    string str;
    cin>>n>>str;

    set<char> s(str.begin(), str.end());
    string result(s.begin(), s.end());
    int unique = result.size();    //number of unique characters
    int duplicate = n-unique;
    //number of ballons
    cout<<2*unique+duplicate<<endl; //2 ballon for unique, 1 for duplicate
}
int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}