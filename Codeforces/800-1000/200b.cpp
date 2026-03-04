/*
    author: hasan2
    problem link: https://codeforces.com/problemset/problem/200/B
*/
#include<iostream>
using namespace std;
int main(){
    int n;  //n drinks
    cin>>n;
    
    double p=0;
    int x; //temp variable to receive percentages
    for(int i=0; i<n; i++){ //here while loop doesn't work because n gets decremented to 0, so i have to use another variable, alternative soution in below
        cin>>x;
        p+=x;
    }

    //p=p/100
    cout<<p/n<<endl;
    return 0;
}
/*
    int m=n;
    while(m--){
        cin>>x;
        p+=x;
    }
    //just replace this with the for loop part
*/