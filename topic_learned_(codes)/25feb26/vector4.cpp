#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5,6,7,8,9,10};
    //vector<int> v;

    //v.assign(10,20);    //this means assign 10 copies of the value 20
    //v.at(1);          //this gives the value whose index is 1
    //v.back();         //returns the last element of a vector
    

    for(int i:v){
        cout<<i<<endl;
    }
    cout<<"testing"<<endl;;


    return 0;
}