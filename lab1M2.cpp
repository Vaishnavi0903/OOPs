#include<iostream>
using namespace std;
class complex
{
    public:
    int real,imag;
    complex(){
        real=imag=0;
    }
    complex operator + (complex);
    complex operator - (complex);
    complex operator * (complex);
    friend istream &operator >> (istream & , complex &);
    friend ostream &operator << (ostream & , complex &);
};
complex complex :: operator + (complex obj)
{
    complex temp;
    temp.real = real + obj.real;
    temp.imag = imag + obj.imag;
    return temp;
}
istream &operator >> (istream &is , complex &obj)
{
    is>>obj.real;
    is>>obj.imag;
    return is;
}
ostream &operator << (ostream &out , complex &obj)
{
    out<<obj.real;
    out<<"+"<<obj.imag<<"i";
}

int main()
{
    complex c1,c2,c3;
    cout<<"enter complex number1"<<endl;
    cin>>c1;
    cout<<"enter complex number1"<<endl;
    cin>>c2;
    c3=c1+c2;
    cout<<"addition is :"<<c3;
    return 0;

}