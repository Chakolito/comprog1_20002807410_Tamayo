#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Hello, I am Ckhyle!!! Welcome to my first C++ application" << endl;
    cout << "Hey! What is your name:____"<<endl;
    cin >> name;
    cout << "Good Day "<<name<<"! It's nice to meet you!"<< endl;

    string month;
    int day;
    int year;

    cout << "When is your Birthday?" << endl;
    cout << "Month:" << endl;
    cin >> month;
    cout << "Day:" << endl;
    cin >> day;
    cout << "Year:" << endl;
    cin >> year;
    cout<< "So your birthday is on: " << month << " / " << day << " / "<< year<< endl;

    int lpyr = year % 4;
        if (lpyr=0)
        cout<<"Nice your Birthyear is a leap year"<<endl;
    else
        cout<<"Nice your Birthyear is a not leap year"<<endl;

    string zodiac_sign="";

    if (month == "january"){
        if (day < 20)
        zodiac_sign = "Capricorn";
        else
        zodiac_sign = "Aquarius";
    }

    else if (month == "february"){
        if (day < 19)
        zodiac_sign = "Aquarius";
        else
        zodiac_sign = "Pisces";
    }

    else if(month == "march"){
        if (day < 21)
        zodiac_sign = "Pisces";
        else
        zodiac_sign = "Aries";
    }
    else if (month == "april"){
        if (day < 20)
        zodiac_sign = "Aries";
        else
        zodiac_sign = "Taurus";
    }

    else if (month == "may"){
        if (day < 21)
        zodiac_sign = "Taurus";
        else
        zodiac_sign = "Gemini";
    }

    else if( month == "june"){
        if (day < 21)
        zodiac_sign = "Gemini";
        else
        zodiac_sign = "Cancer";
    }

    else if (month == "july"){
        if (day < 23)
        zodiac_sign = "Cancer";
        else
        zodiac_sign = "Leo";
    }

    else if( month == "august"){
        if (day < 23)
        zodiac_sign = "Leo";
        else
        zodiac_sign = "Virgo";
    }

    else if (month == "september"){
        if (day < 23)
        zodiac_sign = "Virgo";
        else
        zodiac_sign = "Libra";
    }

    else if (month == "october"){
        if (day < 23)
        zodiac_sign = "Libra";
        else
        zodiac_sign = "Scorpio";
    }

    else if (month == "november"){
        if (day < 22)
        zodiac_sign = "Scorpio";
        else
        zodiac_sign = "Sagittarius";
    }

    else if (month == "december"){

        if (day < 22)
        zodiac_sign = "Sagittarius";
        else
        zodiac_sign ="Capricorn";
    }

    cout<<"Did you know that your zodiac sign is "<<zodiac_sign<<endl;

    return 0;

}
