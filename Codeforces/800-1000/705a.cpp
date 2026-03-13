/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/705/A
*/
#include<iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n; cin >> n;
    
    for(int i=1; i<=n-1; i++){
        if(i%2==1){
           cout << "I hate that ";
        }else{
           cout << "I love that ";
        }
    }
    if(n%2==1){
        cout << "I hate it";
    }else{
        cout << "I love it";
    }
    return 0;
}