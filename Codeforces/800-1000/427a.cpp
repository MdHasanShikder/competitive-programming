/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/427/A
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n; cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){ cin>>v[i]; }

    ll crime = 0, police = 0;
    for(int i=0; i<n; i++){
        if(v[i] >= 0){
            police += v[i];
        }
        else if(v[i] == -1){
            crime++;
            if(police > 0) { crime--; police--; }
        }
    }
    cout<<crime;
}