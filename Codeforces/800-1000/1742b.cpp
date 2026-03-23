/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1742/B
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(){
    int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){ cin>>v[i]; }

        sort(v.begin(), v.end());
        for(int i=1; i<n; i++){
            if(v[i-1] >= v[i]){ cout<<"NO\n"; return 0; }
        }
        cout << "YES\n";
        return 0;
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