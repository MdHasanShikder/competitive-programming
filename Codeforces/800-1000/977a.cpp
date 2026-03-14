/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/977/A
*/
#include <iostream>
using namespace std;
using ll=long long;
int main(){
    ll n; 
    int k;    
    cin>>n>>k;

    while(k--){
        if(n%10 != 0){
            n--;
        }else{
            n /= 10;
        }
    }
    cout<<n;
    return 0;
}