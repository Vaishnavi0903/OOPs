/*#include <iostream>
#include <fstream>
using namespace std;

class employee
{
    string name;
    int id;
    double salary;

public:
    void accept()
    {
        cout << "enter name" << endl;
        cin.ignore();
        getline(cin, name);
        cout << "enterr id" << endl;
        cin >> id;
        cout << "enter your salary" << endl;
        cin >> salary;
    }

    void display()
    {
        cout << "name : " << name << endl;
        cout << "id :" << id << endl;
        cout << "salary :" << salary << endl;
    }
};

int main()
{
    employee E[10];
    fstream f;
    int i, n;
    f.open("vaish.txt", ios::out);
    cout << "enter the number of employee's info you want to store";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "enter the information of employee number " << i + 1 << endl;
        E[i].accept();
        f.write((char *)&E[i], sizeof(E[i]));
    }

    f.close();

    f.open("vaish.txt", ios::in);
    cout << endl;
    cout << "employee's info is as follows :" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "employee no. " << i + 1 << endl;
        E[i].display();
        f.write((char *)&E[i], sizeof(E[i]));
    }
    f.close();
    return 0;
}*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
     ofstream myfile("file.txt") ;
     string text;
     cout<<"enter para  ";
     getline(cin,text);
     myfile<<text;

     myfile.close();

     ifstream file("file.txt");
     string mytext;
     while (getline(file , mytext))
     {
        cout<<mytext;
        if (file.eof() != 0)                //reached at the end of the file
        {
            cout<<"\nyou are at the end of file! "<<endl;
        }
     }
     return 0;


}