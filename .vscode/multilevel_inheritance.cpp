#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_number;
    public:
        void setRoll(int);
        void getRoll();
};

void Student::setRoll(int r){
    roll_number = r;
}

void Student::getRoll(){
    cout<<"Your roll no is "<<roll_number<<endl;
}

class Exam:public Student{
    protected:
        float maths,physics;
    public:
        void setMarks(float,float);
        void getMarks();
};

void Exam::setMarks(float m1, float p1){
    maths = m1;
    physics = p1;
}

void Exam::getMarks(){
    cout<<"Your maths marks are"<<maths<<endl;
    cout<<"Your physics marks are"<<physics<<endl;
}

class Results:public Exam{
    public:
        void display(){
            getMarks();
            getRoll();
            cout<<"Your percentage is"<<(maths+physics)/2<<"%"<<endl;
        }
};

int main(){
    Results harshad;
    harshad.setRoll(100);
    harshad.setMarks(95,80);
    harshad.display();

    return 0;
}