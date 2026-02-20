/*
Author: hasan2
Learning:
1. using just "int" can cause "signed integer overflow" for the multiplication part. so i must use larger data types for the integer, in this case i used "long long"
2. minimum size gurantee (Bits): int is 16 bits, long is 32 bits, long long is 64 bits.
3. there are cpp stl library or functions which i will learn gradually to avoid repeation or errors.
*/
#include<iostream>
using namespace std;
int main(){
    long long x,y;
    cin>>x>>y;
    cout<<x<<" + "<<y<<" = "<<x+y<<endl;
    cout<<x<<" * "<<y<<" = "<<x*y<<endl;
    cout<<x<<" - "<<y<<" = "<<x-y<<endl;
    return 0;
}