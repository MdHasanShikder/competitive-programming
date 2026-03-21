/*
    author: hasan2
*/
//this code is okay now. but in contest i forgot to sort, so in the test case 3 the solution failed
#include <bits/stdc++.h>
using namespace std;
using ll=long long;
void solve(){
    int n;
    ll c,k;
    cin>>n>>c>>k;

    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        if(c < v[i]){ break; }
        else if(c == v[i]){
            c = c + v[i];
        }else if(c > v[i]){
            if(k >= (c - v[i])){ 
                k = k - (c-v[i]);   //updated k first , before updating c
                c = 2*c; //added from k & v[i]
            }else if(k>0){
                c = c + k + v[i];
                k = 0;
            }
            else{
                c = c + v[i];
            }
        }
    }
    cout << c << '\n';
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