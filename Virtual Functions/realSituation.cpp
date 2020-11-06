#include<bits/stdc++.h> 
using namespace std; 

class Animal{
    string type;
    public: 
    Animal() : type("base animal"){} 
    virtual string getType(){
        return type;
    }
};

class Dog: public Animal{
    string type;
    public: 
    Dog() : type("dog"){}
    string getType(){
        return type;
    }
}; 

class Cat: public Animal{
    string type; 
    public: 
    Cat() : type("cat"){} 
    string getType(){
        return type;
    }
}; 

void print(Animal* ani){ //ye har class me banana padta 
    cout << "ANIMAL: " << ani->getType() << "\n";
}

int main(){
    Animal *ani = new Animal(); 
    Dog* dog = new Dog(); 
    Cat* cat = new Cat(); 

    print(ani); 
    print(dog); 
    print(cat);

    return 0; 
}