#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int X;
    long long P;
    cin >> X >> P;
    cout << fixed << setprecision(2) << (100*P)/(100.0-X) << endl;
    return 0;
}