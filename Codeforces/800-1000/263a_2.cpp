/*
    author: hasan2
    problem link: http://codeforces.com/problemset/problem/263/A
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);

    //i don't need a matrix to solve this problem actually! hehe
    int x,r,c;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>x;
            if(x==1){
                r=i;
                c=j;
            }
        }
    }
    //minimum moves
    cout<< abs(r-3)+abs(c-3);
    return 0;
}