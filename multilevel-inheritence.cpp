#include<bits/stdc++.h>
class Student{
    protected:
        int roll_no;
    public:
        void setRollNum(int roll_no){
            this->roll_no=roll_no;
        }
        void getRollNum(void){
            cout<<"The roll_no of the student is: "<<this->roll_no<<endl;
        }
};

class Exam:public Student{
    protected:
    float maths;
    float physics;

public:
    void set_marks(float maths, float physics){
        this->maths = maths;
        this->physics = physics;
    }
    void get_marks(void){
    cout << "The marks obtained in maths are: " << this->maths << endl;
    cout << "The marks obtained in physics are: " << this->physics << endl;
    }
};

class Result: public Exam{
    float percentage;
    public:
        void display_results(){
            getRollNum();
            get_marks();
            cout<<"The percentage of the student is: "<<(maths+physics)/2<<"%"<<endl;
        }
};
int main()
{
    Result harry;
    harry.setRollNum(420);
    harry.set_marks(94.0, 90.0);
    harry.display_results();
    return 0;
}