#include<bits/stdc++.h>
class Point{
    int a,b;
public: 

    Point(){
        this->a=0;
        this->b =0;
        cout<<"Default constructor called: "<<endl;
    }
    Point(int a,int b){
        this->a = a;
        this->b = b;
    }
    void displayPoint(void){
        cout<<"The coordinates of the point are: "<<a<<"    "<<b<<endl;
    }

};
int main(){
    Point p1(6,7),p2;
    p1.displayPoint();
    p2.displayPoint();
    return 0;
}