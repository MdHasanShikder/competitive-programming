/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2009/A
*/
//doing this without using while loop (for my practice)
#include<iostream>
using namespace std;
void solve(){   //if a function doesn't return anything the data type will be "void"
    int a,b;        //if it returns integer, data type will be int, or double for double, char for char, float for float
    cin>>a>>b;
    cout<<b-a<<endl;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}
