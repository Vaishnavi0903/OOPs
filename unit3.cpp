//*********************FUNCTION OVERLOADING*******************

/*#include<iostream>
using namespace std;
class A{
    public:
    A(int x){
       cout<<"value of x is:"<<x<<endl;
    }

    A(double x){
       cout<<"value of x is:"<<x<<endl;
    }

    A(int x,int y){
       cout<<"value of x is:"<<x<<" and value of y is:"<<y<<endl;
    }

};

int main(){
    A a1(3);
    A a2(7.55);
    A a3(4,5);
    return 0;

}*/

//*****************************FUNCTION OVERRIDING--VIRTUAL FUNCTIONS**************

/*#include<iostream>
using namespace std;
class hello{
    public:
    virtual void print(){          //virtual print function is created
        cout<<"print base class"<<endl;
    }
    void show(){
        cout<<"show base class"<<endl;
    }
};

class hii:public hello{
    public:
    void print(){
        cout<<"print derived class"<<endl;
    }
    void show(){
        cout<<"show derived class"<<endl;
    }

};
int main(){
    hello *ptr;     //base class pointer has been created which has access to point
    hii h1;         //members of derived class as well. but if function overriding
    ptr=&h1;        //takes place in priority it points the members of the base class
    ptr -> print(); //(but if virtual keyword is used as in case of print() function
    ptr -> show();  //it will point the print() function of derived class.)
    return 0;
}*/

//*********************OPERATOR OVERLOADING IN UNARY OPERATORS********************

/*#include <iostream>
using namespace std;
class count
{
    int value;

public:
    count()
    {
        value = 5;
    }

    void operator++()
    {
        ++value;
    }
    void display()
    {
        cout << "count : " << value;
    }
};
int main()
{
    count c1;
    ++c1 ; //calling "void operator ++()" function
    c1.display();
    return 0;
}*/

//*******************RETURN VALUE FROM OPERATOR FUNCTION************

/*#include <iostream>
using namespace std;
class count
{
    int value;

public:
    count() : value(5) {}

    count operator++()
    {
        count temp;
        temp.value = ++value;
        return temp;
    }
    count operator++(int)
    {
        count temp;
        temp.value = value++;
        return temp;
    }
    void display()
    {
        cout << "count:" << value << endl;
    }
};
int main()
{
    count c1,result;
    result=++c1;  // calling "count operator ++ () " function"
    result.display();
    result=c1++;  // calling "count operator ++ (int) " function"
    result.display();
    return 0;
}*/