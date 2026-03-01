#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={10,20,30}; //3 elements
    //element indexes: 0,1,2
    for(int i : vec){   //for-each loop
        cout << i <<endl;
    }
    return 0;
}

/*
Notes:
1. vector is a container from STL (standard template library)
2. stack,queue,set,vector etc are container in c++
*/