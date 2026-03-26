/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2195/A
*/
#include <iostream>
#include <vector>
using namespace std;
int solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){ cin>>v[i]; }
    for(int i=0; i<n; i++){
        if(v[i]==67){ cout<<"YES\n"; return 0;}
    }
    cout<<"NO\n";
    return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        solve();
    }
}
//time complexity: O(n)
//space complexity: O(n)