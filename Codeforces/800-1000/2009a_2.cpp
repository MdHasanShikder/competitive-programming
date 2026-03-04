/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2009/A
*/
//this is the shortcut version of the previous
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b;
    while(t--){
    cin>>a>>b;
    //what ever value i take from a to b, the answer is same, difference of a and b is answer
    cout<<b-a<<endl;
    }
    
    return 0;
}
