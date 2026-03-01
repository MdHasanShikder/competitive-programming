#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.pop_back();     //this command removes the element 50
    vec.pop_back();     //this removes the last element 40, which is after 50 (we removed 50 earlier)

    cout<<"First Element: "<<vec.front()<<endl; //this prints the first element of the vector
    cout<<"Last Element: "<<vec.back()<<endl;   //this prints the last element in the vector
    cout<<"Specific Element: "<<vec.at(2)<<endl; //this prints the element at index 2, means the third element of the vector
    cout<<"Capacity: "<<vec.capacity()<<endl;
    cout<<"Size: "<<vec.size()<<endl;

    for(int i : vec){
        cout<<i<<endl;
    }
    cout<<"Hasan"<<endl;
    return 0;
}
/*
Vector functions:
.size()         returns the number of elements in a vector
.push_back()    add element at the end of a vector. Ex- vec.push_back(25); adds the value 25 at the end of the vector
.pop_back()     delete element from the end of a vector
.front()        gives the first element of a vector
.back()     gives the last element of a vector
.at()       to print a specific element by their indexes. Ex- vec.at(0); this prints the first element of a vector
*/