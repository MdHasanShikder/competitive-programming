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
    int x;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=5; j++){
            cin>>x;
            if(x) cout<< abs(i-3)+abs(j-3); //minimum moves (there is only one 1 in the whole matrix)
        }
    }
    
    return 0;
}