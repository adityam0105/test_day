#include<iostream>
using namespace std;
class Employee{
    int id;
    public:
        static int count;
        void setData(void){
            count++;
            cout<<endl<<"Enter the id"<<endl;
            cin>>id;
        }
        void getData(void){
            cout<<endl<<"The id of this employee is: "<<id<<endl;
        }
        static void getCount(void){
            cout<<endl<<"The employee count is: "<<count<<endl;
        }
};
int Employee::count=3;
int main(){
    // Employee aditya,harry,divyansh;
    // aditya.setData();
    // aditya.getData();
    // Employee::getCount();
    cout<<Employee::count;
    // harry.setData();
    // harry.getData();
    // Employee::getCount();

    // divyansh.setData();
    // divyansh.getData();
    // Employee::getCount();

    return 0;
}