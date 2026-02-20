#include<iostream>
using namespace std;
int main(){
   double n,k,a,calc;
   cin>>n>>k>>a;
   calc=double(n*k)/a;
   if(calc>=-2147483647 && calc<=2147483647) cout<<"int";
   else if(calc<-2147483647 || calc>2147483647) cout<<"long long";
   else cout<<"double";
   return 0;

}