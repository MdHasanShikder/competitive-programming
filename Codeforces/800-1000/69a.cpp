/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/69/A
*/
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n; cin>>n;
    
    int c1=0,c2=0,c3=0;
    int sum1=0,sum2=0,sum3=0;
    while(n--){ 
        cin>>c1; sum1 += c1; 
        cin>>c2; sum2 += c2;
        cin>>c3; sum3 += c3; 
    }

    if(sum1==0 && sum2==0 && sum3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}