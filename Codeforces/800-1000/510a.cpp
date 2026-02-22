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
        for(int j=1; j<=c; j++){
            if(i%2==1){
                cout<<"#";
            }
            if(i%2==0){
                if(i%4==0){
                    if(j==1){
                        cout<<"#";
                    }else{
                        cout<<".";
                    }
                }else if(j==c){
                    cout<<"#";
                }else{
                    cout<<".";
                }
            }
        }
        cout<<"\n";
     }
     return 0;
}
