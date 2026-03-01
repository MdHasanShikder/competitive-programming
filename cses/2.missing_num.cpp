#include<iostream>
using namespace std;
using ll=long long;
int main(){
    ll n;
    cin>>n;

    ll c=n*(n+1)/2;
    
    ll sum=0,x;
    for(int i=0; i<n-1; i++){
        cin>>x;
        sum+=x;
    }
    cout<<c-sum<<endl;
    return 0;
}