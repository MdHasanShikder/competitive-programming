/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/472/A
*/
#include <iostream>
using namespace std;
int main(){
    int n; cin>>n;

    //1 is not a composite number
    int x,y;
    if(n%2==0) { x = n/2, y = n/2; }
    else { x = n/2, y = n/2+1; }
    while(1){
        if((x%2==0 || x%3==0) && (y%2==0 || y%3==0)){ break; }
        x--;
        y++;
    }
    cout << x <<" "<< y;
    return 0;
}
//my solution is wrong!!!!!!!!!!!!!!!!!11
//1 is not a composite number
//4 is the minimum composite number
//composite numbers are those whom have minimum one divisor except 1 and that number
//so i can't express the n as a sum of two prime numbers;

//we actually don't need this below if statement
//if(x==4) { break; } //because the lowest composite number is 4