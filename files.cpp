#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int count = 0;
    char c;
    ifstream input;
    cout<<"reading the contents of the file :"<<endl;
    input.open("file.dat");
    input.get(c);
    while (c!='\n')
    {
        cout.put(c);
        count++;
        input.get(c);
    }
    cout<<"\nNumber of the characters in the file ="<<count<<endl;
    return 0;
}
