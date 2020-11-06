/*
    Copy Constructor - A member function which initializes an object using another object of same class. 

    When is user-defined copy contructor needed? 
    -   The default copy constructor performs a memory-wise constructor - Shallow Copy 
    -   We need to define custom copy constructor when an object has pointers or any runtime allocation  - Deep Copy 
    -   In user-defined CC, we make sure that the copied pointres point to new locations. 

*/ 

#include <bits/stdc++.h>
using namespace std;

class A{
    int x, y; 
    public: 
    A(int x, int y) : x(x), y(y){} 
    A(const A &obja) : x(obja.x), y(obja.y){}
    int getx() { return x; }
    int gety() { return y; }  
}; 

int main(){
    A obj1(5,10); //parameterized constructor called 
    A obj2 = obj1; //copy constructor called    

    return 0; 
}