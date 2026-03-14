/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/732/A
*/
#include <iostream>
using namespace std;
using ll=long long;
int main(){
    ll k,r; cin>>k>>r;

    ll shovel = 1;

    while(((k*shovel)%10 != r) && ((k*shovel)%10 != 0)){  //while lastDig != that one coin or zero
        shovel++;
    }
    cout<<shovel<<endl;
    return 0;
}