/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2044/C
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        ll m,a,b,c;
        cin>>m>>a>>b>>c;
        
        ll monkeys = 0, totalSeat = 2*m;

        monkeys += (min(m , a) + min(m , b)); //calculation of a and b
        totalSeat -= monkeys; //remaining seats

        monkeys += min(totalSeat , c); //distribution of remaining seats;
        cout<<monkeys<<'\n';    //printing how many monkeys sat
        
    }
    return 0;
}