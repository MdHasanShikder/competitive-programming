/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/275/
*/
//i recommend this code
#include <iostream>
#include <string>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int times[3][3];
    int adjacent[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin >> times[i][j];
            adjacent[i][j]=times[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i-1 >= 0) adjacent[i][j] += times[i-1][j];
            if(i+1 < 3)  adjacent[i][j] += times[i+1][j];
            if(j-1 >= 0) adjacent[i][j] += times[i][j-1];
            if(j+1 < 3)  adjacent[i][j] += times[i][j+1];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            //adjacent of i,j is odd then light is off, else light is on
            if(adjacent[i][j]%2==1){
                cout<<"0";
            }else{
                cout<<"1";
            }
        }
        cout<<'\n';
    }
    return 0;
}