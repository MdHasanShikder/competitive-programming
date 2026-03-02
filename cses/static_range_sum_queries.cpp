/*
    topic name: prefix sum
    problem link: https://cses.fi/problemset/task/1646
*/
#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
int main(){
    ll n,q;
    cin>>n>>q;

    vector<ll> arr(n);
    for(ll i=0; i<n; i++){
        cin>>arr[i];
    }

    vector<ll> pref(n);
    pref[0]=arr[0];
    for(ll i=1; i<n; i++){
        pref[i]=pref[i-1]+arr[i];
    }

    ll a,b;
    ll sum=0;
    while(q--){
        cin>>a>>b;
        if(a==1){
            sum = pref[b-1];
        }else{
            sum = pref[b-1]-pref[a-2];
        }
        cout<<sum<<endl;
    }
    return 0;
}