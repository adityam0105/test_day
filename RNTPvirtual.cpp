#include<iostream>
using namespace std;
class parentPrint{
    public:
        virtual void display(){
            cout<<"The virtual display function from parent class"<<endl<<endl;
        }
        void print(){
            cout<<"Parent classes print function"<<"\n\n";
        }
};
class childPrint:public parentPrint{
    public:
        void display(){
            cout<<"The display function from the child class"<<"\n\n";
        }
        void print(){
            cout<<"The print function of the child class"<<"\n\n";
        }
};
int main(){

    parentPrint *base;
    childPrint child;
    base = &child;
    base->parentPrint::display();
    base->print();
    return 0;
}