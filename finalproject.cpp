#include <iostream>
#include <string>
using namespace std;

int main() {
    string choice, name, iscontinue;
    string zodiac_sign = "";
    int month, day, year, toys;

    cout << "Hello, what's your name?" << endl;
    cin >> name;
    cout << "Heya " << name << ", could I ask for your birthdate <y/n>?" << endl;
    cin >> choice;

    if (choice == "y" || choice == "Y") {
        cout << "Enter month (1-12)" << endl;
        cin >> month;
        cout << "Enter day (1-31)" << endl;
        cin >> day;
        cout << "Enter year (0000)" << endl;
        cin >> year;
    } else {
        cout << "Fine, have it your way. Hmph" << endl;
        return 0;
    }

    do {
        cout << "Great! I have a box of toys here, maybe you want to check it out." << endl;
        cout << "[1] Update your birthdate" << endl;
        cout << "[2] Check zodiac sign" << endl;
        cout << "[3] Check leap year" << endl;
        cout << "[4] Horoscope animal" << endl;
        cout << "[0] End me" << endl;
        cin >> toys;

        switch (toys) {
            case 1: {
                cout << "Enter month (1-12)" << endl;
                cin >> month;
                cout << "Enter day (1-31)" << endl;
                cin >> day;
                cout << "Enter year (0000)" << endl;
                cin >> year;
                break;
            }

            case 2: {
                if (month == 1 && day >= 20 || month == 2 && day <= 18)
                    zodiac_sign = "Aquarius";
                else if (month == 2 && day >= 19 || month == 3 && day <= 20)
                    zodiac_sign = "Pisces";
                else if (month == 3 && day >= 21 || month == 4 && day <= 18)
                    zodiac_sign = "Aries";
                else if (month == 4 && day >= 20 || month == 5 && day <= 20)
                    zodiac_sign = "Taurus";
                else if (month == 5 && day >= 21 || month == 6 && day <= 20)
                    zodiac_sign = "Gemini";
                else if (month == 6 && day >= 21 || month == 7 && day <= 22)
                    zodiac_sign = "Cancer";
                else if (month == 7 && day >= 23 || month == 8 && day <= 22)
                    zodiac_sign = "Leo";
                else if (month == 8 && day >= 23 || month == 9 && day <= 22)
                    zodiac_sign = "Virgo";
                else if (month == 9 && day >= 23 || month == 10 && day <= 22)
                    zodiac_sign = "Libra";
                else if (month == 10 && day >= 23 || month == 11 && day <= 21)
                    zodiac_sign = "Scorpio";
                else if (month == 11 && day >= 22 || month == 12 && day <= 21)
                    zodiac_sign = "Sagittarius";
                else if (month == 12 && day >= 22 || month == 1 && day <= 19)
                    zodiac_sign = "Capricorn";
                else
                    zodiac_sign = "Invalid date";
                cout << "Your Zodiac Sign is " << zodiac_sign << endl;
                break;
            }

            case 3: {
                int lpyr = year % 4;
                if (lpyr == 0)
                    cout << "Your birthyear is a leap year" << endl;
                else
                    cout << "Your birthyear is not a leap year" << endl;
                break;
            }

            case 4: {

                int baseYear = 2020;
                string zodiacAnimals[] = {"Rat", "Ox", "Tiger", "Rabbit", "Dragon", "Snake", "Horse", "Goat", "Monkey", "Rooster", "Dog", "Pig"};
                int animal = (year - baseYear) % 12;
                if (animal < 0) animal += 12;
                cout << "Your Horoscope Animal is: " << zodiacAnimals[animal] << endl;
                break;
            }

            case 0:
                cout << "Goodbye!" << endl;
                break;

            default:
                cout << "Invalid option, please try again." << endl;
                break;
        }

        if (toys != 0) {
            cout << "Would you like to continue? (y/n): ";
            cin >> iscontinue;
            if (iscontinue == "n" || iscontinue == "N") {
                toys = 0;
            }
        }

    } while (toys != 0);

    return 0;
}
