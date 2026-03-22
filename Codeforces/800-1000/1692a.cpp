/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1692/A
*/
#include <iostream>
using namespace std;
void solve(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    int x = 0;
    if(b > a) x++;
    if(c > a) x++;
    if(d > a) x++;
    cout<<x<<'\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}