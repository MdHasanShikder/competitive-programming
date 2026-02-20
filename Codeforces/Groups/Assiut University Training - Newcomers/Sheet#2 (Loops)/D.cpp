/*
    author: hasan2
    learning:
    1. in normal while loop, when the condition withing while() becomes false the loop breaks, when it becomes false, it don't run even only for once.
    2. i used const to declare that the value of the variable is constant, if any changes will try to change the value the compiler will give the error signal.
    
    3. here we set the loop condition to cin>>X, because we want user to input as much as they want.
    4. the loop should only break only when the user input the correct pass, so there is not limit how much it will run. that's why we only set the return 0; in the correct part! and everytime wrong password is entered the program must print wrong.

    notes: must practice this again 5 times
*/
#include<iostream>
using namespace std;
int main(){
    int X;
    const int correct_pass=1999;

    while(cin>>X){
        if(X==correct_pass){
            cout<<"Correct"<<endl;
            return 0;
        }else{
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}
