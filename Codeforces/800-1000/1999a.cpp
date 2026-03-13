/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1999/A
*/
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    int a;
    while(t--){
        cin>>a;
        cout<< a%10+((a/10)%10) <<endl;
    }
    return 0;
}
