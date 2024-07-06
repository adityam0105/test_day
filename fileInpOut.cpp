#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    ofstream out("sample.txt");
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    out<<name<<" is my name";
    out.close();
        
    
    ifstream in("sample.txt");
    string str;
    in>>str;
    cout<<"Content of thr file is: "<<str<<endl;
    in.close();
    return 0;
}