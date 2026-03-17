/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/703/A
*/
#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    int mishka=0, chris=0;
    while(n--){
        int m,c; cin>>m>>c;
        if(m > c){ mishka++; }
        else if(c > m){ chris++; }
    }
    if(mishka > chris){ cout<<"Mishka\n"; }
    else if(chris > mishka){ cout<<"Chris\n"; }
    else { cout<<"Friendship is magic!^^\n"; }
    return 0;
}