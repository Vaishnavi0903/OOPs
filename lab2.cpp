#include <iostream> // use of header files
#include <string.h>
#include <iomanip>
using namespace std;

class db // class db is created
{
    char roll[20]; // declaration of class variables
    char name[20], classs[20], div[20], dob[20], bg[20], contact[20];
    char license[20];

public:
    static int stdno; // static variable creation

    static void count() // static function creation
    {
        cout << "no. of objects created are :" <<stdno<<endl;
    }

    db() // constructor is created
    {
        strcpy(name, "vaishnavi sontakke"); // strcpy is used only to copy the data. It's a keyword declared in string.h header file.
        strcpy(roll, "1");
        strcpy(classs, "S.E COMP"); //                   strcpy( where to copy , what to copy)
        strcpy(div, "A");
        strcpy(dob, "09/03/2004");
        strcpy(bg, "O+");
        strcpy(contact, "7977946030");
        strcpy(license, "203560458422");
        ++stdno;
    }

    db(db *ob)
    { // constructor pointing towards a object of class db
        strcpy(name, ob->name);
        strcpy(roll, ob->roll);
        strcpy(classs, ob->classs);
        strcpy(div, ob->div);
        strcpy(dob, ob->dob);
        strcpy(bg, ob->bg);
        strcpy(contact, ob->contact);
        strcpy(license, ob->license);
        ++stdno  ;
         }

    void getdata()
    {
        cout << "enter \n1)name  2)roll  3)classs  4)div  5)dob  6)bg  7)contact  8)license\n ";
        cin >> name >> roll >> classs >> div >> dob >> bg >> contact >> license;
    }

    void fin()
    {
        cout << "hello!!" << endl
             << " I am inline function!!";
    }

    friend void display(db d);

    ~db()
    {
        cout <<endl<< this->stdno << "-" << this->name << "object is destroyed" << endl;
    }
};

void display(db d)
{
    cout << "\n1)name:" << d.name << "\n2)roll:" << d.roll << "\n3)classs:" << d.classs << "\n4)div:" << d.div << "\n5)dob:" << d.dob << "\n6)bg:" << d.bg << "\n7)contact:" << d.contact << "\n8)license:" << d.license;
}

int db::stdno;

int main()
{
    int n,i;
    db d1 , *ptr[5] ;

    cout<<"default values"<<endl;
    display(d1);
    
    cout<<"copy constructor"<<endl;
    db d2(& d1);                           //copying d1 obj in d2
    display(d2);

    cout<<"how many objects do u want to create?"<<endl;
    cin>>n;

    for (i=1 ; i<=n ; i++){
        ptr[i] = new db();                   //making new dynamic objects
        ptr[i] -> getdata();                 //adding data in created objects
    }

    for (i=1 ; i<=n ; i++){
        display(* ptr[i]);                     //printing the input data          
        delete(ptr[i]);                 
    }

    db::count();

    cout<<"finally all the objects are destroyed"<<endl;

    return 0;
}