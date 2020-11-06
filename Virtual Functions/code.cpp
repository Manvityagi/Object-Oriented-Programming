/* 

Virtual Function is a function in base class which is overriden in derived class, and which tells the compiler 
to perform late binding on this function. 


*/ 

#include<bits/stdc++.h> 
using namespace std; 

class Base{
    public:
        void show(){
            cout << "From Base";
        }
        virtual void virtual_show(){
            cout << "From Base";
        }
};

class Derived : public Base{
        void show(){
            cout << "From Derived";
        }
        void virtual_show(){
            cout << "From Derived";
        }
}; 

int main(){
    Base *b; 
    Derived d; 
    b = &d; 
    b->show(); 
    cout << "\n";
    /* Early binding happened at compile time, becuase the pointer b was of class B, 
       it resulted in calling base class function even if it derived class adddress in it
       
       Solution: Make the overriden fumction virtual in Base class 

    */    
   b->virtual_show();
    return 0; 
}

