#include<iostream>
using namespace std;
class baseClass{
    public:
        int var_base = 1;
        virtual void display(){
            cout<<"1 Displaying Base class variable "<<var_base<<endl;
        }
};

class derivededClass : public baseClass{
    public:
        int var_derived = 2;
        void display(){
            cout<<"displaying base class variable: "<<var_base<<endl;
            cout<<"displaying derived class variable: "<<var_derived<<endl;
        }
};
int main(){
    baseClass* base_class_pointer;
    baseClass obj_base;
    derivededClass derived_obj;
    base_class_pointer = &derived_obj;
    base_class_pointer->baseClass::display();
    return 0;
}