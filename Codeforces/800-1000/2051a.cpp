/*
    author: hasan2
    problem link: codeforces.com/problemset/problem/2051/B
*/
#include <iostream>
using namespace std;
using ll = long long;
void solve(){
    ll n,a,b,c; cin>>n>>a>>b>>c;

    ll km = 0, day = 0;
    while(km < n){
        if((a+b+c) <= n) { km += (n/(a+b+c))*(a+b+c); day += (n/(a+b+c))*3; }
        if(km >= n){ break; }
        
        km += a; day++; if(km >= n){ break; }

        km += b; day++; if(km >= n){ break; }

        km += c; day++; if(km >= n){ break; }
    }
    cout << day <<'\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}