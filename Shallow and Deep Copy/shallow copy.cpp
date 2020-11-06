#include<bits/stdc++.h>
using namespace std;

class DS{
    int a,b;
    int *arr; 
public:
    DS(){
        arr = new int[5]; 
    }
    // DS(DS &obj){
    //     arr = obj.arr;
    // }
    void update(int *arr){
        this->arr = arr; 
    }
    void printArray(){
        for(int i = 0; i < 5; i++){
            cout << arr[i] << " "; 
        }
        cout << "\n";
    }
};


int main(){
    DS a;
    int arr[] = {1,2,3,4,5}; 
    a.update(arr); 
    cout << "A intitially \n"; 
    a.printArray(); 
    int arr2[] = {5,6,7,8,9}; 

    DS b = a;
    cout << "B intitially \n"; 
    b.printArray(); 

    b.update(arr2); 
    cout << "B after updating it \n"; 
    b.printArray(); 

    cout << "A after B object was made\n"; 
    a.printArray(); 

    
    return 0;
}