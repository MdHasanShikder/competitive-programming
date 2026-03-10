/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/275/A
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

    if(times[0]%2==1) {
        lights[0] = !lights[0];
        lights[1] = !lights[1];
        lights[3] = !lights[3];
    }
    if(times[1]%2==1){
        lights[1] = !lights[1];
        lights[0] = !lights[0];
        lights[2] = !lights[2];
        lights[4] = !lights[4];
    }
    if(times[2]%2==1) {
        lights[2] = !lights[2];
        lights[1] = !lights[1];
        lights[5] = !lights[5];
    }
    if(times[3]%2==1){
        lights[3] = !lights[3];
        lights[0] = !lights[0];
        lights[4] = !lights[4];
        lights[6] = !lights[6];
    }
    if(times[4]%2==1) {
        lights[4] = !lights[4];
        lights[1] = !lights[1];
        lights[3] = !lights[3];
        lights[5] = !lights[5];
        lights[7] = !lights[7];
    }
    if(times[5]%2==1){
        lights[5] = !lights[5];
        lights[2] = !lights[2];
        lights[4] = !lights[4];
        lights[8] = !lights[8];
    }
    if(times[6]%2==1) {
        lights[6] = !lights[6];
        lights[3] = !lights[3];
        lights[7] = !lights[7];
    }
    if(times[7]%2==1){
        lights[7] = !lights[7];
        lights[4] = !lights[4];
        lights[6] = !lights[6];
        lights[8] = !lights[8];
    }
    if(times[8]%2==1) {
        lights[8] = !lights[8];
        lights[5] = !lights[5];
        lights[7] = !lights[7];
    }

    for(int i=0; i<9; ){
        cout << lights[i] << lights[i+1] << lights[i+2] <<'\n';
        i += 3;
    }
    
    return 0;
}