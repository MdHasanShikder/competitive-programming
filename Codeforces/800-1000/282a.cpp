
/*
    author:hasan2
    problem link: https://codeforces.com/problemset/problem/282/A
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;

    int count=0;
    string a;
    while(n--){
        cin>>a;
        if(a=="++X" || a=="X++"){
            count++;
        }else if(a=="--X" || a=="X--"){
            count--;
        }
    }
    cout<<count<<endl;
    return 0;
}
