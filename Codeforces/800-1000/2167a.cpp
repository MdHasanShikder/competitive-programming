/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2167/A
*/
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c,d;

    while(t--){
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}