/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/275/
*/
//this code is repetitive, i wouldn't recommend this code
#include <iostream>
#include <string>
using namespace std;
int main(){

    bool lights[9]={}; //all lights are on
    for(int i=0; i<9; i++) lights[i]=true;

    int times[9];   //storing how many times pressed
    for(int i=0; i<9; i++)  cin >> times[i];

    int adjacent[9];
    //count with adjacent neighbour
    adjacent[0] = times[0] + times[1] + times[3];
    adjacent[1] = times[1] + times[0] + times[2] + times[4];
    adjacent[2] = times[2] + times[1] + times[5];
    adjacent[3] = times[3] + times[0] + times[4] + times[6];
    adjacent[4] = times[4] + times[1] + times[3] + times[5] + times[7];
    adjacent[5] = times[5] + times[2] + times[4] + times[8];
    adjacent[6] = times[6] + times[3] + times[7];
    adjacent[7] = times[7] + times[4] + times[6] + times[8];
    adjacent[8] = times[8] + times[5] + times[7];
    
    for(int i=0; i<9; i++){
        if(adjacent[i]%2==1){
            lights[i] = !lights[i];
        }
    }
    for(int i=0; i<9; ){
        cout << lights[i] << lights[i+1] << lights[i+2] <<'\n';
        i += 3;
    }
    
    return 0;
}