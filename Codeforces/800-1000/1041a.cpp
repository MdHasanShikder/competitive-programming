/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1041/A
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n; cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    ll max = *max_element(v.begin(), v.end());
    ll min = *min_element(v.begin(), v.end());

    cout << max-min+1-n <<endl;
    //found the range of the low and high value by substracting and adding 1 (high_val - low_val + 1)
    //like: range of 4 to 6 is 4,5,6 (total three element)
    //i did it like this: 6-4 = 2 + 1 = 3
    //after then substracted with n to find the minimum stolen keyboards    
    return 0;
}