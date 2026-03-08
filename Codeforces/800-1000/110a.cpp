/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/110/A
*/
#include<iostream>
using namespace std;
using ll=long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin>>n;

    int count=0;
    while(n>0){
        ll dig = n%10;
        if(dig==4 || dig==7){
            count++;
        }
        n = n/10;
    }

    if(count == 4 || count ==7){    //it will be a lucky number, only if 4 and 7 appears 4 or 7 times in that number
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}