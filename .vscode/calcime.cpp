#include <iostream>
#include <cmath>
using namespace std;

class Calculator
{
protected:
    int a;
    int b;

public:
    void getData(int a1, int a2)
    {
        a = a1;
        b = a2;
    }

    void show()
    {
        // getData();
        cout << "Addition is " << a + b << endl;
        cout << "Sub is " << a - b << endl;
        cout << "MUL is " << a * b << endl;
        cout << "DIV is " << a / b << endl;
    }
};

class Scientific : public Calculator
{
protected:
    int a, b;

public:
    void get(int a1, int a2)
    {
        a = a1;
        b = a2;
    };
    void cal()
    {
        cout << "The square root of x is " << sqrt(a) << endl;
        cout << "The square root of y is " << sqrt(b) << endl;
        cout << "The cube root of x is  " << cbrt(a) << endl;
        cout << "The cube root of y is " << cbrt(b) << endl;
    }
};

class hybrid : public Calculator, public Scientific
{
public:
    void masterset(int a, int b)
            {
                Calculator::getData(a,b);
                // Scientific::get(a,b);
                Calculator::show();
                // Scientific::cal();
            }
};


int main()
{

    hybrid h1;
    int q, p;
    cout << "Enter Both NUm" << endl;
    cin >> q >> p;
    // h1.getData(q, p);
    // h1.showAdd();
    // h1.showmul();
    // h1.showdiv();
    // h1.showsub();
    h1.masterset(q,p);

    return 0;
}