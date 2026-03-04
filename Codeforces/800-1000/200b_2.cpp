/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/200/B
*/
//alternate solution with while loop
#include<iostream>
using namespace std;
int main(){
    int n;  //n drinks
    cin>>n;
    
    double p=0;
    int x; //temp variable to receive percentages
    int m=n; // temp variable to run while loop, without changing n
    while(m--){
        cin>>x;
        p+=x;
    }

    cout<<p/n<<endl;
    return 0;
}
