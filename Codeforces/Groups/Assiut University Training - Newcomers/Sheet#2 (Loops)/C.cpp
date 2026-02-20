/*
    author: hasan2
    learning:
    1. when the size comes from the user, we use <vector>
    2. in the main function: vector<data_type> array_Name(Size);
    3. the logic array[i]%2==1, gives incorrect result because:
    In C++, the result of the modulus (%) operator keeps the sign of the left operand.
     5 % 2	→	 1
    -5 % 2	→   -1
     3 % 2	→	 1
    -3 % 2	→	-1
    so when i assign the logic, array[i]%2==1, it becomes false & shows me incorrect results. so the safest logic for odd is, array[i]%2!=0
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int N,i,even=0,odd=0,pos=0,neg=0;
    cin>>N;
    vector<int> array(N);

    for(i=0; i<N; i++){
        cin>>array[i];
    }
    for(i=0; i<N; i++){
        if(array[i]%2==0) even++;
        if(array[i]%2!=0) odd++;
        if(array[i]>0) pos++;
        if(array[i]<0) neg++;
    }
    cout<<"Even: "<<even<<endl<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl<<"Negative: "<<neg<<endl;
    return 0;

}