#include<iostream>
#include<vector>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n;

    ll c=n*(n+1)/2;
    vector<ll> arr(n-1);
    ll sum=0;
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<c-sum<<endl;
    return 0;
}
//you can do it easily without vector (just using a variable)