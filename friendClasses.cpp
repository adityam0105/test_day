#include<bits/stdc++.h>

class Complex{
    int a,b;
    friend class Calculator;

    public:
        void setNumber(int n1, int n2){
            a=n1;
            b=n2;
        }
        void printNumber() {
            cout << "Your number is " << a << " + " << b << "i" << endl;
        }
};

class Calculator{
    public:
        int sumRealComplex(Complex o1, Complex o2){
            return o1.a + o2.a;
        }
        int sumCompComplex(Complex o1, Complex o2){
            return o1.b + o2.b;
        }
};
int main(){
    Complex o1,o2;
    o1.setNumber(3,4);
    o2.setNumber(7,8);
    Calculator calc;
    cout<<"Sum of real parts is: "<<calc.sumRealComplex(o1,o2)<<endl;
    cout<<"Sum of complex parts is: "<<calc.sumCompComplex(o1,o2)<<endl;
    return 0;
}