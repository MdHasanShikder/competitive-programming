/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/510/A
*/
#include<iostream>
#include<string>
using namespace std;
int main(){
    int r,c;
    cin>>r>>c;

    for(int i=1; i<=r; i++){
        if(i%2!=0){
            cout<<string(c,'#');
        }else if(i%4==0){
            cout<<"#"<<string(c-1,'.');
        }else{
            cout<<string(c-1,'.')<<"#";
        }
        cout<<endl;
    }
    return 0;

    //syntax: string(n, 'char')
    //n represents how many times to print
    //'' inside single quotation it represents which character to print
}
