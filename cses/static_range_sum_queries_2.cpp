/*
    topic name: prefix sum
    problem link: https://cses.fi/problemset/task/1646
*/
//this solution is memory efficient

#include<iostream>
#include<vector>
using namespace std;
using ll=long long;

int main(){
    ll n,q;
    cin>>n>>q;

    vector<ll> arr(n);
    cin>>arr[0];

    
    for(ll i=1; i<n; i++){
        cin>>arr[i];
        arr[i]=arr[i]+arr[i-1];
    }

    ll a,b;
    ll sum=0;
    while(q--){
        cin>>a>>b;
        a--,b--;
        if(a==0){
            sum=arr[b];
        }else{
            sum=arr[b]-arr[a-1];
        }
        
        cout<<sum<<endl;
    }
    return 0;
}