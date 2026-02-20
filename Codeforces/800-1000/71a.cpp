/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/71/A
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string word;
        cin>>word;
        if(word.size()>10){
            //.size();  &  .length(); is a <string> function to get the character length of a string
            //in c++, string can be indexed like an array. the 0 index indicated the first character of a string
            //.back();  function gets the last character of a string
            //sometimes endl; can make the code slow for repetative codes, so we used '\n'
            cout<<word[0]<<word.size()-2<<word.back()<<'\n';
        }else{
            cout<<word<<endl;
        }
    }
    return 0;
}