//used kadane's algorithm
//for maximum subarray sum
#include<iostream>
#include<climits>
#include<vector>
using namespace std;
using ll=long long;
int main(){
    ll n; cin>>n;
    vector<ll> vec(n);
    for(int i=0; i<n; i++){ cin >> vec[i]; }

    ll currentSum = 0, maxSum = INT_MIN;
    for(int i=0; i<n; i++){
        currentSum += vec[i];
        maxSum = max(currentSum, maxSum);
        if(currentSum < 0){ currentSum = 0; }
    }
    cout << maxSum;
    return 0;
}