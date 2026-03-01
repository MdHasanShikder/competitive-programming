/*
    Youtube Video Link: 
    https://www.youtube.com/watch?v=NWg38xWYzEg&list=PLBEfE-B3YBr9lOHlyo4D6jD2K3fXqZ0J4


    1. STL (Standard Template Library)
    2. Vector
    3. Functions of vector
        .push_back()
        .pop_back()
        .back()
        .front()
        .at()
        .size()
        and a special function of vector is:
        .capacity()         this gives how much is the capacity of the vector is
    4. Static vs Dynamic Allocation
        in vector it is dynamic allocation, eveytime it is multiplied by 2
        like if 1 element it's capacity is 1
        if 2 element then it's capacity = 1(previous capacity)*2 = 2
        if 3 element then its capacity = 2(previous capacity)*2 = 4      so in this stage there are 3 element, but the size of the vector is 4, means it can store 4 elements
        if 4 element then its capaity = no increase, because its capacity is already 4
        if 5 element then its capacity = 4(previous capacity)*2 = 8         in this case there are 5 elements but the size of the vector is 8, means it can store total 8 elements
        in this way the dynamic allocation of vector continues
    5. How vector works in memory
    6. Leetcode problem
        136.Single Number
    7. Bitwise Binary (XOR)
        for using bitwise exor the operator is ^
        1^1=0
        0^0=0
        1^0=1
        0^1=1
    8. the command line is
    g++ -std=c++20 fileName.cpp -o fileName
    
*/