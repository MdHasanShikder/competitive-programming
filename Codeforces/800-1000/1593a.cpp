/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1593/A
*/
#include<iostream>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        ll a,b,c; cin>>a>>b>>c;

        if(a==b && b==c){ cout<<"1 "<<"1 "<<"1\n"; }
        else if(a==b && b > c){ cout<<"1 "<<"1 "<<a-c+1<<'\n'; }
        else if(a==b && b < c){ cout<<c-a+1<<" "<<c-b+1<<" "<<"0\n";}
        else if(b==c && b > a){ cout<<b-a+1<<" 1 "<<"1\n"; }
        else if(b==c && b < a){ cout<<"0 "<<a-b+1<<" "<<a-c+1<<'\n';}
        else if(a==c && a > b){ cout<<"1 "<<a-b+1<<" 1\n"; }
        else if(a==c && a < b){ cout<<b-a+1<<" 0 "<<b-c+1<<'\n';}
        else if(a!=b && a!=c){
            if(a>b && a>c){ cout<<"0 "<<a-b+1<<" "<<a-c+1<<'\n';}
            else if(b>a && b>c){ cout<<b-a+1<<" 0 "<<b-c+1<<'\n';}
            else { cout<<c-a+1<<" "<<c-b+1<<" 0\n";}
        }
    }
    return 0;
}