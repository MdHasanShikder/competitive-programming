/*
        *      *
        **    **
        ***  ***
        ********
        ********    make this butterfly pattern
        ***  ***
        **    **
        *      *
*/
#include<iostream>
using namespace std;
int main(){
    int n=4;
    
    //top half
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<i+1; j++){   // 1 to i+1
            cout<<"*";
        }

        //spaces
        for(int j=0; j<n-i-1; j++){   // 1 to n-i-1
            cout<<" ";
        }

        //star
        for(int j=0; j<n-i-1; j++){   // 1 to i+1
            cout<<" ";
        }

        //spaces
        for(int j=0; j<i+1; j++){   // 1 to n-i-1
            cout<<"*";
        }
        
        cout<<endl;
    }

    //bottom half
    for(int i=0; i<n; i++){
        //star
        for(int j=0; j<n-i; j++){   // 1 to n-i
            cout<<"*";
        }
        //spaces
        for(int j=0; j<i; j++){   // 1 to i
            cout<<" ";
        }  
        //space
        for(int j=0; j<i; j++){   // 1 to i
            cout<<" ";
        }

        //star
        for(int j=0; j<n-i; j++){   // 1 to n-i
            cout<<"*";
        }

        cout<<endl;
    }
    return 0;
}