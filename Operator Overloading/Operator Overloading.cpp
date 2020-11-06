#include <bits/stdc++.h>
using namespace std;

class Fraction{
    int num;
    int deno;
    public: 
    Fraction(int n, int d) : num(n), deno(d){}
    void print(){
        cout << num << " " << deno << "\n";
    }

    //CLASS KE ANDAR DECLARE KAR RAHE HAI TO, BINARY OPERATOR ME LEFT SIDE GENRALLY THIS HOTA HAI 
    Fraction operator+(Fraction f2){
        Fraction ans(1,1);
        ans.deno = this->deno * f2.deno;
        ans.num = this->deno*f2.num + this->num*f2.deno;
        int gcd =__gcd(ans.deno,ans.num); 
        ans.deno /= gcd;
        ans.num /= gcd;
        return ans;
    }

    Fraction operator+(int n){
        return *this + Fraction(n,1);
    }

    bool operator<(Fraction f2){
        return this->num * f2.deno < this->deno*f2.num; 
    }
};

int main(){
    Fraction f1(8,4);
    Fraction f2(12,3); 
    Fraction f3 = f1 + f2;
    f3.print(); 
    Fraction f4 = f1 + 3;
    f4.print();
    return 0; 
}