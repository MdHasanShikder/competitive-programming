#include<iostream>
using namespace std;
int main(){
    int n=5;

    int num=1;  //if we don't want to reset num, simply put it outside of the loop
    for(int i=0; i<n; i++){     //outer loop = how many lines?
        for(int j=0; j<=i; j++){    //inner loop = what to print in that line?
            cout<<num;
        }
        num++;
        cout<<endl;
    }
}