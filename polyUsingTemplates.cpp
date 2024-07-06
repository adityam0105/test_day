#include<iostream>
using namespace std;
template <typename T>

T add (T a, T b){
    return a+b;
}
int main(){
    cout<<add(4,6)<<endl;
    cout<<add(10.0,2.2)<<endl;
    return 0;
}