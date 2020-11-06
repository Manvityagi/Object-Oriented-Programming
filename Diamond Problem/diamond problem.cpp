#include<bits/stdc++.h>
using namespace std; 

class A{
    public:
    int a; 
    void f1() {
        cout << "f1\n"; 
    }
};

class B1 : public A{
    public: 
    int b1;
    void f2() {
        cout << "f2\n"; 
    }
}; 

class B2: public A{
    public: 
    int b2;
    void f3() {
        cout << "f3\n"; 
    }
};

class C : public B1, public B2{
    public: 
    int c; 
    void f4() {
        cout << "f4\n"; 
    }
};

int main(){
    C obj; 
    //Problem 1: 'a' is present two times 
    cout << "Size of C obj: " << sizeof(obj) << " bytes \n";
    //Problem 2: The problem at this point is obj has two a's , now which 'a' is being referred
    //is ambiguous for the compiler
    //compiler ko lag raha hai 2 alag alag class hai A, to konse class ke a variable ki baat ho rahi hai, wo samajh nahi paa raha hai
    /*
    obj.a = 5;
    cout << obj.a;
    */ 

    obj.f4();
    obj.f3();
    obj.f2();
    obj.f1();

    return 0;
}