/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2193/A
*/
#include <iostream>
using namespace std;
void solve(){
    int n,s,x;
    cin >> n >> s >> x;
    int val, sum=0;
    while(n--){
        cin >> val;
        sum += val;
    }
    cout << ((s >= sum) && ((s-sum)%x==0) ? "YES\n" : "NO\n");
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}