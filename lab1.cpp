#include <iostream>
using namespace std;

class complex
{
public:
    float real, imag;
    // void input(float a , float b){
    //     real = a , imag = b;
    //}

    complex()
    {
        real = imag = 0;
    }

    complex operator+(const complex obj)
    {
        complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    complex operator-(const complex obj)
    {
        complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;
        return temp;
    }

    complex operator*(const complex obj)
    {
        complex temp;
        temp.real = (real * obj.real - imag * obj.imag);
        temp.imag = (real * obj.imag + imag * obj.real);
        return temp;
    }

    complex operator/(const complex obj)
    {
        complex temp;
        temp.real = (real * obj.real + imag * obj.imag) / (obj.real * obj.real + obj.imag * obj.imag);
        temp.imag = (imag * obj.real - real * obj.imag) / (obj.real * obj.real + obj.imag * obj.imag);
        return temp;
    }

    // void output(){
    //     if (imag<0){
    //     cout<<"complex no. is : "<< real<<imag<<" i "<<endl;}
    //     else{
    //         cout<<"complex no. is : "<< real<<" + i "<<imag<<endl;}
    //     }

    complex operator>>(const complex obj)
    {
        complex temp;
        temp.real = real;
        temp.imag = imag;
        return temp;
    }

    friend istream &operator>>(istream &is, complex &obj)
    {
        is >> obj.real;
        is >> obj.imag;
        return is;
    }

    friend ostream &operator<<(ostream &out, complex &obj)
    {
        out << obj.real;
        if (obj.imag < 0)
        {
            out << obj.imag << " i ";
        }
        else
        {
            out << "+" << obj.imag << " i ";
        }

        return out;
    }
};

int main()
{
    complex c1, c2, c3;
    cout << "enter your 1st complex number" << endl;
    cin >> c1;
    cout << "enter your 2nd complex number " << endl;
    cin >> c2;
    c3 = c1 + c2;
    cout <<"addition is : "<< c3 << endl;
    c3 = c1 - c2;
    cout <<"subtraction is : "<< c3 << endl;
    c3 = c1 * c2;
    cout <<"multiplication is : "<< c3 << endl;
    c3 = c1 / c2;
    cout <<"divison is : "<< c3 << endl;

    return 0;
}
