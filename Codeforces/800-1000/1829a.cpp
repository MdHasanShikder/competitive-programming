/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/1829/A
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        string k = "codeforces";

        int differ = 0;
        for(int i=0; i<10; i++){
            if(s[i] != k[i]){
                differ++;
            }
        }
        cout << differ << '\n';
    }
    return 0;
}