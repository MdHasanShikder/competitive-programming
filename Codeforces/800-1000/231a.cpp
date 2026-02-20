/*
    author:hasan2
    problem link: https://codeforces.com/problemset/problem/231/A
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int count=0,a,b,c;
    while(n--){
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(sum==2 || sum==3){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
