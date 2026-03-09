/*
    author: hasan2
    problem link: http://codeforces.com/problemset/problem/263/A
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int arr[5][5];
    int i1,j1;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                i1=i+1;
                j1=j+1;
            }
        }
    }
    //minimum moves
    int min = abs(i1-3)+abs(j1-3);
    cout<<min;

    return 0;
}