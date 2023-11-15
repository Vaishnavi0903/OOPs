#include <iostream>
#include <string.h>
using namespace std;
class publication
{
public:
    string title;
    float price;

    void getdata()
    {
        cout << "enter the title of the publication :" << endl;
        cin.ignore();
        getline(cin, title);
        cout << "enter the price of the publication :" << endl;
        cin >> price;
    }
    void showdata()
    {
        cout << "the title of the publication is :" << title << endl;
        cout << "the price of the publication is :" << price << endl;
    }
};

class bookName : public publication
{
    int page;

public:
    int pagecount()
    {
        cout << "enter the number of pages: " << endl;
        cin >> page;
        if (page = 0)
        {
            cout << "invalid page count!!" << endl;
        }
        if (page >= 0)
        {
            return page;
        }
    }
    void show_book()
    {
        cout << "details of the book :" << endl;
        cout << "the number of pages of the book:" << page << endl;
    }
};

class tape : public publication
{
    float time;

public:
    float timeRequired()
    {

        cout << "enter the playing time of tape in minutes :" << endl;
        cin >> time;
        if (time = 0)
        {
            cout << "invalid playing time!!" << endl;
        }
        if (time >= 0)
        {
            return time;
        }
    }
    void show_time()
    {
        cout << "details of the tape :" << endl;
        cout << "the playing time of the tape is :" << time << endl;
    }
};

int main()
{
    bookName b1[5];
    tape t1[5];
    int ch, b_count = 0, t_count = 0;
    do
    {

        cout << "---publication database system---" << endl;
        cout << "1:add details of book" << endl;
        cout << "2:add details of tape" << endl;
        cout << "3:display details of book" << endl;
        cout << "4:display details of tape" << endl;
        cout << "5.exit" << endl;
        cout << "enter your choice:" << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            b1[b_count].getdata();
            b1[b_count].pagecount();
            b_count++;
            break;
        case 2:
            t1[t_count].getdata();
            t1[t_count].timeRequired();
            t_count++;
            break;
        case 3:
            for (int j = 0; j < b_count; j++)
            {
                b1[j].showdata();
                b1[j].show_book();
                break;
            }
        case 4:
            for (int j = 0; j < t_count; j++)
            {
                t1[j].showdata();
                t1[j].show_time();
                break;
            }
        case 5:
            exit(0);
            break;
        }
    } while (ch < 5);

    return 0;
}
