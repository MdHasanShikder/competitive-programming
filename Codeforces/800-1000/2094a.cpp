/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/2094/A
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        //in while loop, first checks t is non zero or not, if non zero the loop runs, then t is decreased by 1, that way everytime runs. when t becomes zero (false), the loop stops.
        string word1,word2,word3;
        cin>>word1>>word2>>word3;
        //[0] here index 0 means prints the first character of the string
        cout<<word1[0]<<word2[0]<<word3[0]<<'\n';
    }
    return 0;
}