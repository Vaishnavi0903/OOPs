#include <iostream>
#include <string>
#include <exception>
using namespace std;
// int main()
// {
//     double i,j;
//     void divide(double,double);
//     cout<<"enter denominator:";
//     cin>>j;
//     cout<<"enter numerator: ";
//     cin>>i;
//     divide(i,j);
//     return 0;
// }
// void divide(double a,double b)
// {
//     try
//     {
//         {
//             if (b==0)
//             {
//                 throw b;
//             }
//             cout<<"result is "<<a/b;
//         }
//     }
//     catch(double b)
//     {
//         cout<<"can't divide by zero";
//     }

// }
/***********************MULTIPLE CATCHING*************************/
// void func(int a)
// {
//     try
//     {

//         if (a < 0)
//         {
//             throw "negative";
//         }
//         else if ((a % 2) == 0)
//         {
//             throw a;
//         }
//         else
//         {
//             cout << "number " << a << " is odd!" << endl;
//         }
//     }
//     catch (const char *str)
//     {
//         cout << "number is "<<str << endl;
//     }
//     catch (int x)
//     {
//         cout << "number " << x << " is even!" << endl;
//         ;
//     }
// }

// int main()
// {
//     int arr[10];
//     for (int i = 1; i < 11; i++)
//     {

//         cout << "enter numbers:";
//         cin >> arr[i];
//         func(arr[i]);
//     }
//     return 0;
// }
/***********************************RETHROWING AN EXCEPTION**************************************/

// void func()
// {
//     try
//     {
//         throw "mystring";
//     }
//     catch(const char *str)
//     {
//         cout<<"in function:"<<str;
//         throw ;          //rethrowing exception
//     }
// }
// int main()
// {
//     try{
//         func();
//     }
//     catch(const char *str){  //catching the re-thrown exception
//           cout<<"\nin main "<<str;
//     }
//     return 0;
// }
/*********************EXCEPTION SPECIFICATIONS*************/
// void f() throw(int,double)
// {
//         throw "hello";
// }
// int main()
// {
//     set_unexpected(f);
//     try
//     {
//         f();
//     }
//     catch(int i)
//     {
//         cout<<"\nhandling integer exception: "<<i;
//     }
//     catch(double x)
//     {
//         cout<<"\nhandling double exception: "<<x;
//     }
//     catch(...)
//     {
//         cout<<"\nhandling something else";
//     }
// }
/****************************CONSTRUCTOR-DESTRUCTOR EXCEPTION HANDLING**************************************/
// class test
// {
//     public:
//     test(){cout<<"\nconstructor called!";}
//     void f()
//     {
//         cout<<"\nmy name is vaish";
//     }
//     ~test(){cout<<"\ndestructor called!";}
// };
// int main()
// {
//     try
//     {
//         test t1,t2;
//         t1.f();
//         t2.f();
//         throw 100;
//     }
//     catch(int i)
//     {
//         cout<<"\nexception is caught!!!"<<i;
//     }
//     return 0;
// }
/*******************************EXCEPTION AND INHERITANCE***********************************/
/*class Base{};
class derived : public Base{};
int main()
{
    derived d1;
    try
    {    throw d1; }
    catch(Base obj)
    {
        cout<<"\nexception of derived object is handled by catch block of BASE object!!";
    }
    catch(derived obj)
    {
        cout<<"\nexception of derived object is handled by catch block of DERIVED object itself!!";
    }
}*/
//but on changing the sequence of catch block we get different output
class Base{};
class derived : public Base{};
int main()
{
    derived d1;
    try
    {    throw d1; }
    catch(derived obj)
    {
        cout<<"\nexception of derived object is handled by catch block of DERIVED object itself!!";
    }
    catch(Base obj)
    {
        cout<<"\nexception of derived object is handled by catch block of BASE object!!";
    }
}