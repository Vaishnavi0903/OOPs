#include <iostream>
using namespace std;

// template <class T>
// T Max(T left, T right)
// {
//     return left<right ? right:left;
// }
// int main()
// {
//     int num1, num2;
//     cout << "enter numbers:";
//     cin >> num1;
//     cin >> num2;
//     int max1 = Max(num1, num2);
//     cout << "maximum : " << max1;
// }

/*************************CLASS TEMPLATE******************************/

template<class T>
class number
{
    private :
     T num;
    public:
     void accept()
     {
        cout<<"\nenter num: ";
        cin>>num;
     }
     T display()
     {
        return num;
     }
};
int main()
{
    number<int>num1;
    num1.accept();
    cout<<"number is: "<<num1.display();

    number<double>num2;
    num2.accept();
    cout<<"number is: "<<num2.display();
}