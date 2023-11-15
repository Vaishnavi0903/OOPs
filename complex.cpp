#include <iostream>
using namespace std;

class complex
{
public:
    int real, image;

    complex()
    {
        real = 0;
        image = 0;
    }
    complex(int a, int b)
    {
        real = a;
        image = b;
    }

    complex operator+(complex const &obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.image = image + obj.image;
        return temp;
    }

    complex operator -(complex const &obj)
    {
        complex temp;
        temp.real = real - obj.real;
        temp.image = image - obj.image;
        return temp;
    }

    void display()
    {
        if (image < 0)
        {
            cout<<real<<image<<"i"<<endl;
        }
        else{
            cout<<real<<"+"<<image<<"i"<<endl;
        }
    }

};
int main()
{
    complex c1(3, 5);
    complex c2(2, 3);
    complex c3;
    c3 = c1 + c2;
    c3.display();
    c3 = c2-c1;
    c3.display();
    return 0;
}