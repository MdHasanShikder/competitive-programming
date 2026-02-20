/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/71/A
    note: this is an alternative solution with while loop, instead of for loop
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        string word;
        cin>>word;
        if(word.size()>10){
        cout<<word[0]<<word.size()-2<<word.back()<<'\n';
        }else{
            cout<<word<<endl;
        }
        n--;
    }
    return 0;
}
