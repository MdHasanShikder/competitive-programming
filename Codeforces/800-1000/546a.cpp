/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/546/A
*/
#include <iostream>
using namespace std;
using ll=long long;
int main(){
    int k,n;
    ll w;
    cin >> k >> n >> w;

    ll finalPrice = ((w*(w-1)/2)+w)*k;

    if(n < finalPrice){
        cout << finalPrice-n;
    }else{
        cout << "0";
    }
    return 0;
}