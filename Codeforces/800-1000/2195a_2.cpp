/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2195/A
*/
#include <iostream>
using namespace std;
void solve(){
    int n, val; 
    cin>>n;
    bool found = false;
    for(int i=0; i<n; i++){ 
        cin>>val;
        if(val == 67) found = true;
    }
    cout << (found ? "YES\n" : "NO\n" );
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--) solve();
}
//time complexity: O(1)
//space complexity: O(1)