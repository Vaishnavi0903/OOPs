//*******************************PROTECTED MEMBERS******************************************************************************************//

/*#include<iostream>
using namespace std;
class Parent
{
  protected:               //protected members of the base class are inherited as the protected members in child class.
     int id_protected;
};
class Child : public Parent{
  public:
      void set_id(int id)
      {
          id_protected = id;
      }
      void display()
      {
        cout<<"id_protected: "<<id_protected<<endl;
      }
};
int main()
{
    Child c1;
    c1.set_id(78655);
    c1.display();
    return 0;
}*/

//********************************CONSTRUCTORS AND DESTRUCTORS IN DERIVED CLASS****************************************************************//

// calling of constructor order ==> 1)base class  2)child class
// calling of destyructor order ==> 1)child class 2)base class
/*#include <iostream>
using namespace std;
class parent
{
public:
    parent()
    {
        cout << "constructor of base class is called " << endl;
    }
    ~parent()
    {
        cout << "destructor of base class is called " << endl;
    }
};
class child : public parent
{
public:
    child()
    {
        cout << "constructor of child class is called " << endl;
    }
    ~child()
    {
        cout << "destructor of child class is called " << endl;
    }
};
int main()
{
    child obj1;
    return 0;
}*/

//*********************************OVERRIDING MEMBER FUNCTION****************************************************************************

/*if same function is defined in both base class and derived class ...and we have called the function using the object
of the derived class then the function of the derived class is executed*/

/*#include<iostream>
using namespace std;
class base{
   public:
   void print(){
     cout<<"base class function is called"<<endl;
   }
};
class derived : public base {
    public:
    void print(){
       cout<<"derived class function is called "<<endl;
    }
};
int main(){
    derived d1;
    d1.print();
    base b1;
    b1.print();
    return 0;
}*/

//****************************CLASS HIERARCHICAL IN C++ ******************************************************************************

/*--> if more than one class is inherited from the base class , it's know as hierarchial inheritance
  --> all the features which are common in child class are included in the base class*/

/* #include<iostream>
  using namespace std;
  class animal{
      public:
      void info(){
        cout<<"i am a animal"<<endl;
      }
  };
  class dog : public animal{
    public:
    void bark(){
        cout<<"I am a dog . I always bark "<<endl;
    }
  };
  class cat : public animal{
    public:
    void meow(){
        cout<<"I am a cat . I always meow"<<endl;
    }
  };
  int main(){
    dog dog1;
    cout<<"dog class"<<endl;
    dog1.info();
    dog1.bark();

    cat cat1;
    cout<<"cat class"<<endl;
    cat1.info();
    cat1.meow();
    return 0;
  }*/

//********************************MULTIPLE INHERITANCE***********************************************************************************//

/*#include<iostream>
using namespace std;
class mammal{
     public:
       mammal(){
        cout<<"mammals can give birth to baby "<<endl;
       }
};
class wingedanimal{
    public:
       wingedanimal(){
         cout<<"winged animal can fly "<<endl;
       }
};
class bat : public mammal , public wingedanimal {};
int main(){
  bat b1;
  return 0;
}*/

//***********************AMBIGUITY IN MULTIPLE INHERITANCE***********************************************************************//

/*--> FUNCTION OVERRIDING is the problem of multiple inheritance*/

//********SOLUTION --> Virtual base class********//

/*#include <iostream>
using namespace std;
class A
{
public:
  void display()
  {
    cout<<"display function of class A";
  }
};
class B : public virtual A
{
};
class C : public virtual A
{
};
class D : public B, public C
{
};

int main()
{
  D obj;
  obj.display();
  return 0;
}*/

//***********************ABSTRACT CLASS *********************************************************************************************

//--> class that contains pure virtual function is called abstract class.
//--> we cannot create objects of the abstract class.
//--> we can create derived classes from it and use its data members(except pure virtual function)

/*#include <iostream>
using namespace std;
// abstract class
class shape
{
protected:
  float dimensions;

public:
  void getdimension()
  {
    cin >> dimensions;
  }

  virtual float calculatedarea() = 0;             // pure virtual function
};
class square : public shape
{
public:
  float calculatedarea()
  {
    return dimensions * dimensions;
  }
};
class circle : public shape
{
public:
  float calculatedarea()
  {
    return 3.314 * dimensions * dimensions;
  }
};
int main()
{
  square s1;
  circle c1;

  cout << "enter length of the square " << endl;
  s1.getdimension();
  cout << "area of square: " << s1.calculatedarea() << endl;

  cout << "enter radius of the circle " << endl;
  c1.getdimension();
  cout << "area of circle: " << c1.calculatedarea() << endl;

  return 0;
}*/

//***************************FRIEND CLASS***********************************************************************************************

/*#include<iostream>
using namespace std;
class B;            //forward declaration
class classA{
  private:
    int numA;
    friend class classB;        //class B can access all the members of class A
  public:
    classA() : numA(10){};
};
class classB{
     private:
     int numB;
     public:
         classB(): numB(4){};

         int add(){
          classA objA;        //to access members of class a we need to make object and then perform operations
          return objA.numA + numB;
         }
};

int main(){
  classB objB;
  cout<<"sum: "<<objB.add();
  return 0;
}*/

//***********************************NESTED CLASS************************************************************************************//

//-->it is declared in another class.It is also a member of enclosing class and has same access rights as
//   other members.
//-->the member functions of enclosing class have no spcl access rights to the members of nested class.

/*#include<iostream>
using namespace std;
class A{
  private :
     int a;
  public:
  A(){
    cout<<"the constructor is called and a is "<<a<<endl;
  }
  class B{
      private :
      int num;
      public:
      void getdata(int n){
        num = n;
      }
      void showdata(){
        cout<<"the number is: "<<num<<endl;
      }
  };
};
int main(){
  A objA;
  cout<<"NESTED CLASS IN C++"<<endl;
  A :: B obj;                      //making object of nested class
  obj.getdata(5);
  obj.showdata();
  return 0;
}*/

//*******************DECLARING AND INITIALIZING POINTERS************************************************************************************

/*#include<iostream>
using namespace std;
int main(){
  int var=10;
  int *ptr;    //declaring pointer variable
  ptr=&var;     //ptr stores address of var
  cout<<"value at ptr: "<<ptr<<endl;
  cout<<"value of &var: "<<&var<<endl;
  cout<<"value of var: "<<var<<endl;
  cout<<"value pf *ptr: "<<*ptr<<endl;
  return 0;
}*/

//*********************************************INDIRECTION OPERATOR (*)*****************************************************************

//--> * is indirection operator and it is complement of &.
//--> It is UNARY operator and returns the value of the variable at the address specified by its operand.

/*#include<iostream>
using namespace std;
int main(){
  int var;
  int *ptr;
  int val;

  var=3000;
  ptr=&var;      //address of var
  val=*ptr;      //value at the ptr(address of var)

  cout<<"value of var: "<<var<<endl;
  cout<<"value of ptr: "<<ptr<<endl;
  cout<<"value of val: "<<val<<endl;
  return 0;
}*/

//*************************************MEMORY MANAGEMENT *********************************************************************
//                    (new and delete operators -- dynamic memory allocation)

/*#include <iostream>
using namespace std;
int main()
{
  int *ptr1;   // declare a int pointer
  float *ptr2; // declare a float pointer

  ptr1 = new int;             // dynamically allocate memory
  ptr2 = new float;

  *ptr1 = 45;    // value at ptr1 is 45
  *ptr2 = 45.67; // value at ptr2 is 45.67

  cout << "*ptr1: " << *ptr1 << endl;
  cout << "ptr1: " << ptr1 << endl;
  cout << "*ptr2: " << *ptr2 << endl;
  cout << "ptr2: " << ptr2 << endl;

  delete ptr1;              // deallocate the memory
  delete ptr2;

  return 0;
}*/

//******************************************POINTER TO OBJECTS*****************************************************************************

/*#include<iostream>
using namespace std;
class square{
  private:
      double side ;
  public:
     square(double s = 2.0){
          cout<<"constructor called! "<<endl;
          side = s;
     }
     double volume (){
      return side*side ;
     }
};
int main(void)
{
  square s1(5);
  square  s2(4);
  square *ptrsquare;

  ptrsquare = &s1;
  cout<<"volume of square1: "<<ptrsquare->volume()<<endl;

  ptrsquare = &s2;
  cout<<"volume of square2: "<<ptrsquare->volume()<<endl;

  return 0;
}*/

//*********************************************this POINTER*************************************************************************

/*#include<iostream>
using namespace std;
class test{
    private:
       int x;
    public:
       void setX(int x)
       {   //this pointer is used to retrieve the object's x hidden by the local variable 'x'.
           this->x=x;
       }
       void display()
       {
          cout<<"x = "<<x<<endl;
       }
};
int main()
{
  test obj;
  obj.setX(6);
  obj.display();
  return 0;
}*/

//************************pointer vs array***********************************************************************

// In c++ pointers not only hold the address of single variable , it can also store the address of cells of array
//--> ptr = arr  <=> ptr = arr[0] ; ptr+1 = arr[1] , ptr+2 = arr[2].........

/*#include<iostream>
using namespace std;
int main(){
  float arr[3];
  float *ptr;

  ptr=arr;
  cout<<"displaying address using arrays: "<<endl;

  for(int i=0 ; i<3 ; i++)
  {
    cout<<"&arr["<<i<<"] = "<<&arr[i]<<endl;
  }

  cout<<"displaying address using pointers: "<<endl;
  for(int i=0;i<3;i++)
  {
     cout<<"ptr + "<<i<<" = "<<ptr+i<<endl;
  }
  return 0;
}*/

//***********************************accessing arrays using pointers*********************************************************

/*#include <iostream>
using namespace std;
int main()
{
  float arr[5];
  float *ptr;
  ptr = arr;

  cout << "enter 5 numbers: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cin >> *(ptr + i);
  }

  cout << "displaying array: " << endl;
  for (int i = 0; i < 5; i++)
  {
    cout << *(ptr + i) << endl;
  }
  return 0;
}*/

//*************************ARRAYS OF POINTERS**************************************************************************

/*#include<iostream>
using namespace std;
const int MAX = 3;
int main()
{
  int arr[MAX] = {100,20,450};
  int *ptr[MAX];

  for (int i = 0; i < MAX; i++)
  {
    ptr[i]=&arr[i];                //assign address of integer in the pointer
  }

  for(int i=0;i<MAX;i++)
  {
    cout<<"value of arr["<<i<<"] = "<<*ptr[i]<<endl;
  }
  return 0;
}*/

//*********************************FUNCTION POINTER*******************************************************************
//-->ithis pointer points to a function and it will store the address of a function

/*#include <iostream>
using namespace std;
int add(int a, int b)
{
  return a + b;
}
int mul(int a)
{
  return a * 5;
}
int main()
{
  int (*funcptr)(int, int);
  funcptr = &add;
  int sum = funcptr(5, 4);
  cout << "sum: " << sum << endl;

  int multiplication = mul((*funcptr)(5, 4));
  cout << "multiplication: " << multiplication << endl;
  return 0;
}*/

//*********************************************POINTERS TO POINTERS / DOUBLE POINTERS***************************************************
// first pointer stores the address of variable and second pointer stores the address of first pointer

/*#include<iostream>
using namespace std;
int main(){
  int var=34;
  int *ptr1;
  int **ptr2;
  ptr1=&var;
  ptr2=&ptr1;
  cout<<"value of var: "<<var<<endl;
  cout<<"value of var using single pointer: "<<*ptr1<<endl;
  cout<<"value of var using double pointer: "<<**ptr2<<endl;
  return 0;
}*/

//***********************************POINTERS TO DERIVED CLASS******************************************************************************

/*#include<iostream>
using namespace std;
class base
{
    public:
    int n1;
    void show(){
      cout<<"n1: "<<n1<<endl;
    }
};
class derive : public base 
{
    public:
    int n2;
    void show(){
      cout<<"n1: "<<n1<<endl;
      cout<<"n2: "<<n2<<endl;
    }
};
int main(){
  base b;
  base *bptr;
  bptr=&b;
  cout<<"base class pointer(bptr) pointing to members of base class: "<<endl;
  bptr -> n1=45;
  bptr -> show();

  derive d;
  derive *dptr;
  dptr=&d;
  cout<<"derive class pointer(dptr) pointing to members of derive class: "<<endl;
  dptr -> n1 = 34;
  dptr -> n2 = 89;
  dptr -> show();

  return 0;
}*/

//******************************************PASSING POINTER TO FUNCTION********************************************************************

/*#include<iostream>
using namespace std;
 double getavg(int* arr , int size){
  int sum=0;
  for(int i=0; i<size ; i++){
    sum += arr[i];
  }
  double avg;
  avg =  sum/size;
  return avg;
 }
 int main(){
  int balance[5]={1,2,3,4,5};
  cout<<"avg :"<<getavg(balance , 5);
  return 0;
 }*/

 //********************************RETURN POINTERS FROM FUNCTIONS**********************************************************************

/* #include<iostream>
 using namespace std;
 double* getsal(){
       double sal=26.56;
       double *HourlySal=&sal;             
       return HourlySal;                   //returning address
 }
 int main(){

  double sal = * getsal();                //value at returned address
  cout<<"Hourly salary: "<<sal<<endl;
  return 0;
 }*/

 //***********************************NULL POINTERS**************************************************************************************
//assign the pointer null in case u don't have exact address.

/*#include<iostream>
using namespace std;
int main(){
  int *ptr = NULL;
  cout<<"value ot ptr is :"<<ptr;
  return 0;
}*/

//************************************************VOID POINTER***********************************************************************

#include<iostream>
using namespace std;
int main(){
   void *ptr;
   float f = 2.3f;
   ptr=&f;
   cout<<&f<<endl;
   cout<<ptr<<endl;
   
   int x=6;
   ptr=&x;
   cout<<&x<<endl;
   cout<<ptr<<endl;
   return 0;
}









