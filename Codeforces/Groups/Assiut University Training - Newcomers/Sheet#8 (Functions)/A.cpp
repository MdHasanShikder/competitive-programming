/*
    author:hasan2
    learning: 
    1. shift + alt + f, for auto formatting in vs code
    2. cls command to clear the command prompt screen
    3. alt + z, for toggling word wrap
*/
#include<iostream>
using namespace std;
float calc(float X, float Y){
    return X+Y;    
}
int main(){
    float X,Y;
    cin>>X>>Y;
    cout<<calc(X,Y)<<endl;
    return 0;
}