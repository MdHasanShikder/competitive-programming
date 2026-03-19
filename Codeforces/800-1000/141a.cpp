/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/141/A
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string a,b,c; cin>>a>>b>>c;

    string ab = a+b; //merged two string

    sort(c.begin(),c.end());    //sorted keeping duplicates
    sort(ab.begin(),ab.end());  //sorted keeping duplicates
    
    cout<< (c==ab ? "YES" : "NO");  //compared same or not
    return 0;
}