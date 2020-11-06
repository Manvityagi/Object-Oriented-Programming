#include<bits/stdc++.h>
using namespace std; 

class A{
    public:
    int a; 
    void f1() {
        cout << "f1\n"; 
    }
};

class B1 : virtual public A{
    public: 
    int b1;
    void f2() {
        cout << "f2\n"; 
    }
}; 

class B2: virtual public A{
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
    cout << "Size of C obj: " << sizeof(obj) << " bytes \n";
    obj.a = 5;
    cout << obj.a << "\n";
    obj.f4();
    obj.f3();
    obj.f2();
    obj.f1();

    return 0;
}

/*
Solution: 
    Make A virtual base class of C, 
How ? 
    Make the child class of problematic class as virtual 
    Isse hua ye, ki jab C ne f1 ko B1 me dhundha to wo B1 me naa milne ke baad wo 
    A me nahi jayega dhundne  jaisa pehle DFS types me root tak dhundta tha (jab viortual nahi kiya tha) , 
    B2 me dhundega, waha bhi nahi milega, fir A me directly dhundega, because, kind of, 
    C ka virtual parent ban gaya hai ab A

    Before
            A
        /       \
      B1         B2
        \       /
            C

    After 
            A
        /   |   \
      B1    |    B2
        \   |  /
            C

Another Important Point: 
Size of object C 
    - Expected: 16 bytes
    - Actual: 24 bytes 

Compiler virtual inheritance ko implement karne ke liye , jin classes ko inhertiance karte waqt 
virtual keyword diya hai, un dono classes me compiler 2 pointer variables bana deta hai 

*/ 