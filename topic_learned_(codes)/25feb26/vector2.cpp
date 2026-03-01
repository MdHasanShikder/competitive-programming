#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec(5,0);   //(size,element)
    //here 5 is the size, and 0 is the element 5 times
    for(int i : vec){
        cout << i <<endl;
    }
    return 0;
}