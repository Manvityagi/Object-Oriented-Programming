#include<bits/stdc++.h>
using namespace std; 

class Shape{
    int color; 
    public:
    virtual void properties() = 0; 
}; 

class Rectangle : public Shape{
    void properties(){
        cout << "I am a rectangle\n"; 
    }
}; 

class Square: public Shape{
    void properties(){  
        cout << "I am a square\n"; 
    }
}; 

int main(){
    Shape *s;

    Rectangle r;
    s = &r;
    s->properties();

    Square sq; 
    s = &sq;
    s->properties();

    return 0; 
}