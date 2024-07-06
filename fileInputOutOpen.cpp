#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("a.txt");
    out<<"This is me"<<endl;
    out<<"This is also me";
    out.close();
    string st;
    ifstream in;
    in.open("a.txt");
    while (in.eof()==0) 
    {
        // using getline to fill the whole line in st
        getline(in,st);
        cout<<st<<endl;
    }
    return 0;
}