#include<bits/stdc++.h>
using namespace std;

class Dummy{
    int a,b; 
    int *p; 
public:
    Dummy(){
        p = new int; 
    }
    void setData(int x, int y, int z){
        a = x;
        b = y; 
        *p = z; 
    }
    void getData(){
        cout << "a :" << a << "\n";
        cout << "b :" << b << "\n";
        cout << "*p :" << *p << "\n";
    }
};


int main(){
    Dummy d1; 
    d1.setData(3,4,5);
    cout << "D1 Initially\n"; 
    d1.getData(); 

    Dummy d2 = d1; 
    cout << "D2 initially\n"; 
    d2.getData(); 

    d2.setData(8,9,11); 

    cout << "D2 after updating D2\n"; 
    d2.getData(); 

    cout << "D1 after updating D2\n"; 
    d1.getData(); 

    return 0;
}