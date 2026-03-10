/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/266/B
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;
 
    while(t--){
        for(int i=0; i<n; ){
            if(s[i]=='B' && s[i+1]=='G'){
                s[i]='G';
                s[i+1]='B';
                i += 2;
            }else{
                i++;
            }    
        }
    }
    cout<<s;
    return 0;
}