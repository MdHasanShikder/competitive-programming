/*
Author: hasan2
Learning (for myself):
1. to use string i must add <string> header file.
2. to define a string i have to use 'string' data type.
2. cin considers space as termination. so if i want to input a line i must use getline(cin, stringName); function
*/

#include<iostream>
#include<string>
using namespace std;
int main() {
    string s;
    getline(cin, s);
    cout << "Hello, " << s << endl;
    return 0;
}
