#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    //if input is 0 0, we can't place domino
    //if input is 1 1, we also can't place domino, this edge case automatically is handled by integer division (throwing out the fractional part)
    cout<<(m*n)/2<<endl;
    return 0;
}
