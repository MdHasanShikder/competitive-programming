/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1873/B
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using ll = long long;
void solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(v.begin(), v.end());
    v[0]++;
    
    ll product = 1;
    for(int i=0; i<n; i++){
        product *= v[i];
    }

    cout << product << '\n';
}
int main(){
    int t; cin>>t;
    while(t--) solve();
    return 0;
}