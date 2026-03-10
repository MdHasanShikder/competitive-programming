/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/32/B
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;

    int len = s.size();
    string f;

    for(int i=0; i<len; ){
        if(s[i]=='-' && s[i+1]=='-'){
            f.push_back('2');   
            i += 2;
        }else if(s[i]=='-' && s[i+1]=='.'){
            f.push_back('1');
            i += 2;
        }else{
            f.push_back('0');
            i++;
        }
    }
    cout<<f;
    return 0;
}