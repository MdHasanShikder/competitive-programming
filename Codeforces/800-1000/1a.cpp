/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1/A
*/
#include<iostream>
using namespace std;
using ll=long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    ll n,m,a; cin>>n>>m>>a;
    if(n<=a && m<=a) cout<<1;
    else if(n<=a && m>a) cout<<m/a+(m%a==0? 0:1);
    else if(n>a && m<=a) cout<<n/a+(n%a==0? 0:1);
    else if(n>a && m>a) cout<<(m/a+(m%a==0? 0:1))*(n/a+(n%a==0? 0:1));
    return 0;
}