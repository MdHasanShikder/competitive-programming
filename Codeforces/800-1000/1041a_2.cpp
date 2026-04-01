/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1041/A
*/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n; cin>>n;
    ll val;

    ll max_val = INT_MIN, min_val = INT_MAX;

    for(int i=0; i<n; i++){
        cin >> val;
        if(val > max_val) max_val = val;
        if(val < min_val) min_val = val;
    }

    cout << (max_val - min_val + 1) - n <<endl;
    //found the range of the low and high value by substracting and adding 1 (high_val - low_val + 1)
    //like: range of 4 to 6 is 4,5,6 (total three element)
    //i did it like this: 6-4 = 2 + 1 = 3
    //after then substracted with n to find the minimum stolen keyboards    
    return 0;
}
//solved it without vector
//space complexity O(1)