/*
    author: hasan_shikder
    problem link: https://leetcode.com/problems/palindrome-number/
*/
#include<bits/stdc++.h>
using namespace std;
using ll=long long;
class Solution {
public:
    bool isPalindrome(ll x) {
        ll n=x,rev=0;
        if(x<0) return false;
        while(n>0){
            rev=rev*10+n%10;
            n=n/10;
        }
        if(x==rev){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    Solution s;
    ll x = 10; //121 is true, -121 is false, 10 is false
    cout << s.isPalindrome(x) <<endl;
    return 0;
}