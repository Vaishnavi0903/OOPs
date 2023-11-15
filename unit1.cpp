//*************************DATA ABSTRACTION*************

/*#include<iostream>
using namespace std;
class abstraction{
      private:
      int a,b;
      public:
      void set (int x , int y){
        a=x;         //displaying only essential information to outside world
        b=y;         //and hiding the details of implementation.
      }
      void display(){
           cout<<"a="<<a<<endl;
           cout<<"b="<<b<<endl;
      }
};
int main(){
    abstraction obj1;
    obj1.set(5,6);
    obj1.display();
    return 0;
}*/

//******************DATA ENCAPSULATION****************

/*#include<iostream>
using namespace std;
class encapsulation{
    private:
    int x;
    public:
    void set(int a){
        x=a;
    }
    int get(){       //bundling of data with the methods or restricting
        return x;    //of direct access to some of an object's components
    }
};
int main(){
    return 0;
}*/

//**************************INHERITANCE************************

/*#include<iostream>
using namespace std;
class A{
    private:
       int x;
    public:
       int y;
    protected:
       int z;
};
class B:public A{
    //x is not accessible from B
    //y is public
    //z is protected
};
class C:protected A{
     //x is not accessible from C
     //y is protected
     //z is protected
};
class D:private A{
     //x is not accessible from D
     //y is private
     //z is private
};
int main(){
    return 0;
}*/

//*******************DATA TYPES ****************************

/*#include <iostream>
using namespace std;
int main()
{
    cout << "size of char :" << sizeof(char) << endl;
    cout << "size of wchar_t :" << sizeof(wchar_t) << endl;
    cout << "size of int :" << sizeof(int) << endl;
    cout << "size of short int :" << sizeof(short int) << endl;
    cout << "size of long int :" << sizeof(long int) << endl;
    cout << "size of float :" << sizeof(float) << endl;
    cout << "size of double :" << sizeof(double) << endl;
}*/

//***************************STRUCTURES*******************

/*#include <iostream>
using namespace std;
struct person
{
    char name[20];
    int age;
    float salary;
};
int main()
{
    person p1;

    cout << "enter your name: ";
    cin.ignore();
    cin.get(p1.name, 20);
    cout << "enter your age: ";
    cin >> p1.age;
    cout << "enter your salary: ";
    cin >> p1.salary;

    cout << "\nDisplaying information: " << endl;
    cout << "name :" << p1.name << endl;
    cout << "age :" << p1.age << endl;
    cout << "salary :" << p1.salary << endl;
    return 0;
}*/

//*****************************ENUMERATIONS*****************

/*#include<iostream>
using namespace std;
enum week{sunday,monday,tuesday,wednesday=25,thursday,friday,saturday};
int main(){
    week today;
    today=monday;
    cout<<"monday is the day of the week : "<<today+1<<endl;
    cout<<"wednesday: "<<wednesday<<endl;
    cout<<"thursday: "<<thursday<<endl;
    return 0;
}*/

//*******************************ARRAYS**********************

/*#include <iostream>
using namespace std;

void array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}
int main()
{
    int arr[] = {0, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    array(arr, n);
    return 0;
}*/

//****************************STRINGS*************************

// C-style strings//

// char str[] = "C++" = {'C' , '+' , '+' , '\0'}

/*#include <iostream>
using namespace std;
int main()
{
    char str[100];

    cout << "enter the string: ";
    cin.get(str, 100);
    cout << "you have entered:  " << str << endl;

    cout << "\nenter another string: ";
    cin.ignore();
    cin.get(str, 100);
    cout << "you have entered: " << str << endl;
    return 0;
}*/

// STRING OBJECTS//

/*#include <iostream>
using namespace std;
int main()
{
    //declaring a string object
    string str;
    cout<<"enter a string";
    getline(cin , str );
    cout<<"you have entered : "<<str <<endl;
    return 0;
}*/

//********************VIRTUAL FUNCTION**************************

/*#include <iostream>
using namespace std;

class shape
{
protected:
    int width;
    int height;

public:
    virtual int getarea() = 0; // pure virtual function
    //even if the function is not declare virtual no error is coming.
    void setwidth(int w)
    {
        width = w;
    }
    void setheight(int h)
    {
        height = h;
    }
};

// derived class
class rectangle : public shape
{
public:
    int getarea()
    {
        return (width * height);
    }
};
class triangle : public shape
{
public:
    int getarea()
    {
        return (width * height) / 2;
    }
};
int main()
{
    rectangle rec;
    triangle tri;
    rec.setwidth(5);
    rec.setheight(7);
    cout<<"total area of rectangle: "<<rec.getarea()<<endl;

    tri.setwidth(5);
    tri.setheight(7);
    cout<<"the area of triangle is: "<<tri.getarea()<<endl;
    return 0;
}*/

//******************FUNCTIONS*****************************

/*#include <iostream>
using namespace std;

//declaring a function
void greet(){
    cout<<"hello there!! "<<endl;
}
int main(){
    //calling a function
    greet();
    return 0;
}*/

//*******************CONSTRUCTORS********************************

// default constructor//
/*#include <iostream>
using namespace std;
class cube
{
public:
    int side;
    cube()
    {
        side = 10;
    }
};
int main()
{
    cube c;
    cout<<"side: "<<c.side;
    return 0;
}*/

// parameterized constructor//
/*#include <iostream>
using namespace std;
class student
{
public:
    int roll;
    string name;

    // first constructor
    student(int x)
    {
        roll = x;
        name = "none";
    }

    // second constructor
    student(int x, string str)
    {
        roll = x;
        name = str;
    }
    void display()
    {
        cout << "roll no. is: " << roll << endl;
        cout << "name is: " << name << endl;
    }
};
int main()
{
    student s1(5);
    student s2(2, "john");
    s1.display();
    s2.display();
    return 0;
}*/

// copy constructor//

// classname(const classname &old_obj)

/*#include<iostream>
using namespace std;
class point{
  private:
  int x,y;
  public:
  point(int x1,int y1){
    x=x1;
    y=y1;
  }

  //copy constructor
  point(point &old_obj){
    x=old_obj.x;
    y=old_obj.y;
  }

  int getx(){return x ;}
  int gety(){return y ;}
};

int main(){
    point p1(2,3);
    point p2 = p1;
    cout <<"x of p1 is: "<<p1.getx()<<endl;
    cout <<"y of p1 is: "<<p1.gety()<<endl;
    cout <<"x of p2 is: "<<p2.getx()<<endl;
    cout <<"y of p2 is: "<<p2.gety()<<endl;

    return 0;
}*/

//***************************object and memory allocation***************

// new and delete operator//
/*#include <iostream>
using namespace std;
class box
{
public:
    box()                  //explicitly written default constructor
    {
        cout << "constructor is called " << endl;
    }
    ~box()                //explicitly written destructor
    {
        cout << "destructor is called " << endl;
    }
};
int main()
{
    box *boxarr = new box[2];    //dynamic creation of box object array
    delete [] boxarr;            //delete array

    return 0;
}*/

//**********************STATIC MEMBERS******************************

/*#include <iostream>
using namespace std;
class box
{
private:
    double length;
    double breadth;
    double height;

public:
    static int objcount;

    box(double l, double b, double h)
    {
        cout << "constructor called !"  << endl;
        length = l ;
        breadth = b;
        height = h;

        objcount ++;
    }
};

int box :: objcount = 0;  //initialize static member of class
int main()
{
    box box1(3.3 , 4.5 , 6.7);
    box box2(2.3 , 4.5 , 1.2);
    cout<<"total objects : "<<box::objcount <<endl;
    return 0;
}*/

//*********************INLINE FUNCTIONS************************

/*#include<iostream>
using namespace std;

inline void display(int num){
    cout<<"number is "<<num<<endl;//copies the function to the location of the
}                                //the function call.
int main(){
    display(5);
    display(7.89);
    return 0;
}*/

//************************************FRIEND FUNCTION**********************

#include <iostream>
using namespace std;
class Distance
{
private:
    int meter;
    friend int addfive(Distance);

public:
    Distance(){
        meter = 0;
    }
};

int addfive(Distance d)
{
    d.meter += 5;
    return d.meter;
}
int main()
{
    Distance D;
    cout << "Distance: " << addfive(D);
    return 0;
}
