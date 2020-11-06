#include <bits/stdc++.h>
using namespace std;
class demo;

class B{
    int key;
    public:
    B(int x) : key(x){}
    friend class demo; //friend class example 
};

class demo{
    int a;
public:
    demo(int a) : a(a){}
    
    void fu(B &b){
        cout << b.key << "\n";
    }

    friend void func(demo); //friend function example 
};

void func(demo d){
    cout << d.a << "\n";
}


int main(){
    demo d(5); 
    func(d);
    B b(19);
    d.fu(b);
    return 0;
}




// Friend Class : A friend class can access private and 
//protected members of other class in which it is declared as friend.