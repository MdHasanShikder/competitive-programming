/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/617/A
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin >> n;
    
    int steps = 0;
    int lastDig = n%10; //extracting the last digit
    
    if(lastDig == 0 || lastDig==5){
        steps = n/5;    
    }else if(lastDig > 0 && lastDig <5){
        n -= lastDig;       //updating n;
        steps = n/5 + 1;    //1,2,3,4 will take only 1 step to make last dig 0, so +1
    }else if(lastDig >5 && lastDig <=9){
        n -= lastDig;       //updating n
        steps = n/5 + 2;    //6,7,8,9 will take only 2 step to make last dig 0, so +2
    }

    cout<<steps;
    return 0;
}