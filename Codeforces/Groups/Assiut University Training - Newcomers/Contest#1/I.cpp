#include<iostream>
using namespace std;
int main(){
    int N,a,b;
    cin>>N;
    a=N%10;
    b=(N-a)/10;
    if(a%b==0 || b%a==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}