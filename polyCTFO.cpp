#include<iostream>
using namespace std;

class Aditya{
    public:
        void f(int x){
            cout<<"My value is integer: "<<x<<endl;
        }
        void f(char c){
            cout<<"My value is a char: "<<c<<endl;
        }
        void f(int x,int y){
            cout<<"I got ur sum: "<<x+y<<endl;
        }
};

int main(){
    Aditya a;
    a.f(3,4);
    a.f('a');
    return 0;
}