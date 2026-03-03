/*
    1
    1 2
    1 2 3
    1 2 3 4
*/
#include<iostream>
using namespace std;
int main(){
    int n=4;
    
    for(int i=0; i<n; i++){ 
        for(int j=1; j<=i+1; j++){      //alternative: j=0; j<i+1
            cout<<j<<" ";               //  cout<< (j+1) <<" ";
        }
        cout<<endl;
    }
    return 0;
}