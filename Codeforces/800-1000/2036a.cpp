/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2036/A
*/
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
using namespace std;
int solve(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){ cin>>v[i]; }

    for(int i=1; i<n; i++){
        if((abs(v[i-1] - v[i]) != 5) && (abs(v[i-1] - v[i]) != 7)){
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}
int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
}