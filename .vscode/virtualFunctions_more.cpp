#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            rating = r;
            title = s;
        }

        virtual void display(){};
        virtual void display()=0; //do nothing function--->pure virtual function
        // abstrach base class is something in which atleast one pure virtual function is present..
};

class CWHvideo : public  CWH{
    float videoLenght;
    public:
        CWHvideo(string s, float r, float vl):CWH(s,r){
            videoLenght = vl;
        }

        void display(){
            cout<<"Video Title is"<<title<<endl;
            cout<<"Ratings: "<<rating<<endl;
            cout<<"Video Lenght: "<<videoLenght<<endl;
        }
};

class CWHtext : public  CWH{
    int words;
    public:
        CWHtext(string s, float r, int wc): CWH(s,r){
            words = wc;
        }

        void display(){
            cout<<"Video Title is"<<title<<endl;
            cout<<"Ratings: "<<rating<<endl;
            cout<<"Text Count: "<<words<<endl;
        }
};

int main(){
    string title;
    float vl,rat;
    int wc;

    title = " Harshads Code";
    vl = 5.02;
    rat = 4.5;
    

    CWHvideo video(title, rat, vl);
    // video.display();

    title = " Harshads Code";
    
    rat = 4.5;
    wc = 10.22;

    CWHtext text(title, rat, wc);
    // text.display();

    CWH *ptr[2];
    ptr[0] = &video;
    ptr[1] = &text;

    ptr[0]->display();
    ptr[1]->display();
    

    return 0;
}

/*
Rules for virtual functions
1.They cannot be statis
2.They are accesses by object pointers
3.Virtual functions can be a friends of other classes
4.A virtual function in base class might not be used.
5.If a virtual funciton is defined in base class, there is no necessity in redifining it in the derived class.

*/