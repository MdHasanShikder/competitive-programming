#include<iostream>
using namespace std;
int main(){
    int n=5;

    //better approach than the previous one
    
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
}