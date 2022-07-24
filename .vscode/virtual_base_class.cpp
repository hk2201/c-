#include<iostream>
using namespace std;

class Student{
    protected:
        float Roll_num;
    public:
        void setNum(float num){
            Roll_num = num;
        }

        void printNum(){
            cout<<"Your Roll Number is "<<Roll_num<<endl;
        }

};

class Test: virtual public Student{
    protected:
        float maths,physics;
    public :
        void setMarks(float m1, float m2){
            maths = m1;
            physics = m2;
        }

        void printMarks(){
            cout<<"Your maths marks are: "<<maths<<endl;
            cout<<"Your physics marks are: "<<physics<<endl;
        }
};

class Sport: virtual public Student{
    protected:
        float score;
    public:
        void setScore(float s){
            score = s;
        }

        void printScore(){
            cout<<"Your PT score is: "<<score<<endl;
        }
};

class Result:public Test, public Sport{
    private:
        float Total;
    public:
        void total(){
            Total = maths + physics + score;
            printMarks();
            printNum();
            printScore();
            cout<<"Your Total Score is: "<<Total<<endl;
        }
};

int main(){
    Result hk;
    hk.setNum(100);
    hk.setMarks(85.5,95.1);
    hk.setScore(10);
    hk.total();
    return 0;
}