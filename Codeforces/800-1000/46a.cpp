/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/46/A
*/
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin>>n;

    int num=2;
    for(int i=2; i<=n; i++){ //started from 2nd person, ended in the last person; (1 is already less)
        cout<< num << " ";
        num += i;
        if(num>n){ num -= n; }  //reseting it back to start if num exceed n;
    }
    return 0;
}