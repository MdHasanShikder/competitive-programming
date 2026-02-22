/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1328/A
*/
#include<iostream>
using namespace std;
using ll=long long;
int main(){
    int t;
    ll a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<endl;
        }
        else{
            cout<<b-(a%b)<<endl;
        }
    }
    return 0;
}
