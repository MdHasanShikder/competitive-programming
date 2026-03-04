/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2009/A
*/
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
    cin>>a>>b;
    c=a;    //what ever value i take from a to b, the answer is same
    cout<<(c-a)+(b-c)<<endl;
    }
    
    return 0;
}
