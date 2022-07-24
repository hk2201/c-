#include<iostream>
#include <cmath>
using namespace std;

// class simple
// {
//     protected:
//         int x1,y1;
//     public:
//         void process()
//         {
//             cout<<"The addition is "<<x1+y1<<endl;
//             cout<<"The subtraction is "<<x1-y1<<endl;
//             cout<<"The multiplication is "<<x1*y1<<endl;
//             cout<<"The division is "<<x1/y1<<endl;
//         }
//         void set(int a,int b)
//         {
//             x1=a;
//             y1=b;
//         }
// };

// class scientific
// {
//     protected:
//         int x2,y2;
//     public:
//         void process()
//         {
//             cout<<"The square root of x is "<<sqrt(x2)<<endl;
//             cout<<"The square root of y is "<<sqrt(y2)<<endl;
//             cout<<"The cube root of x is  "<<cbrt(x2)<<endl;
//             cout<<"The cube root of y is "<<cbrt(y2)<<endl;
//         }
//         void set(int a,int b)
//         {
//             x2=a;
//             y2=b;
//         }
// };

// class hybrid: public simple,public scientific
// {
//     public:
//         void masterset(int a,int b)
//         {
//             simple::set(a,b);
//             scientific::set(a,b);
//             simple::process();
//             scientific::process();
//         }
// };

// int main()
// {
//     int p,q;
//     hybrid h;
//     cout<<" Enter two values "<<endl;
//     cin>>p>>q;

//     h.masterset(p,q);
//     return 0;
// }


class SimpleCalculator
{
protected:
    int num1, num2;
    void get()
    {
        cout << "Enter value of first number: ";
        cin >> num1;
        cout << "Enter value of second number: ";
        cin >> num2;
    }
    void display()
    {
        cout << "The first numebr is: " << num1 << endl;
        cout << "The second numebr is: " << num2 << endl;
    }
    void calc_simple()
    {
        int a;
        cout << "Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division: ";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "The answer is: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "The answer is: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "The answer is: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "The answer is: " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
        }
    }
};

class ScientificCalculator : public SimpleCalculator
{
protected:
    int num;
    void set()
    {
        cout << "Enter number: ";
        cin >> num;
    }
    void calc_scientific()
    {
        int a;
        cout << "Enter 1 for natural log, 2 for common log, 3 for sqrt, 4 for absulute value: ";
        cin >> a;
        switch (a)
        {
        case 1:
            cout << "The answer is: " << log(num) << endl;
            break;
        case 2:
            cout << "The answer is: " << log10(num) << endl;
            break;
        case 3:
            cout << "The answer is: " << sqrt(num) << endl;
            break;
        case 4:
            cout << "The answer is: " << abs(num) << endl;
            break;
        default:
            cout << "Invalid input!" << endl;
            break;
        }
    }
};

class HybridCalculator : public ScientificCalculator
{
public:
    void calc()
    {
        cout << "\nFunctions of simple calculator" << endl;
        get();
        calc_simple();
        cout << "\nFunctions of scientific calculator" << endl;
        set();
        calc_scientific();
    }
};

int main()
{
    HybridCalculator h1;
    h1.calc();
    return 0;
}