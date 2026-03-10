#include <iostream>
using namespace std;

struct Date
{
    int day, month, year;

    void initDate()
    {
        day = 4;
        month = 3;
        year = 2010;
    }

    void acceptDateFromConsole()
    {
        cout << "Enter Day: ";
        cin >> day;
        cout << "Enter Month: ";
        cin >> month;
        cout << "Enter Year: ";
        cin >> year;
    }

    void printDateOnConsole()
    {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    bool isLeapYear()
    {
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return true;
        else
            return false;
    }
};

int main()
{
    Date d;
    int choice;

    do
    {
        cout << "\n---- Date Menu ----\n";
        cout << "1. Initialize Date\n";
        cout << "2. Accept Date\n";
        cout << "3. Print Date\n";
        cout << "4. Check Leap Year\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                d.initDate();
                break;

            case 2:
                d.acceptDateFromConsole();
                break;

            case 3:
                d.printDateOnConsole();
                break;

            case 4:
                if(d.isLeapYear())
                    cout << "Leap Year\n";
                else
                    cout << "Not a Leap Year\n";
                break;
        }

    }while(choice != 5);

    return 0;
}