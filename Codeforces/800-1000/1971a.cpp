/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1971/A
*/
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    
    while(t--){
        int a,b; cin>>a>>b;            
        if(a<b) { cout<<a<<" "<<b<<'\n'; }  
        else if(b<a) { cout<<b<<" "<<a<<'\n'; }
        else { cout<<a<<" "<<b<<'\n'; }
    }
    return 0;
}