#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Hello, I am Ckhyle!!! Welcome to my first C++ application" << endl;
    cout << "Hey! What is your name:____"<<endl;
    cin >> name;
    cout << "Good Day "<<name<<"! It's nice to meet you!"<< endl;

    int month;
    int day;
    int year;

    cout << "When is your Birthday?" << endl;
    cout << "Month:" << endl;
    cin >> month;
    cout << "Day:" << endl;
    cin >> day;
    cout << "Year:" << endl;
    cin >> year;
    cout<< "so your birthday is on: " << month << " / " << day << " / "<< year<< endl;

    int lpyr = year % 4;
        if (lpyr=0)
        cout<<"Nice your Birthyear is a leap year"<<endl;
    else
        cout<<"Nice your Birthyear is a not leap year"<<endl;

    return 0;

}
