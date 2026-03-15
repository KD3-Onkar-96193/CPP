#include <iostream>
using namespace std;

class Date
{

private:
    int day;
    int month;
    int year;

public:
    Date() : day(0), month(0), year(0) {}

    void acceptDate(void)
    {
        cout << "Enter day: " << endl;
        cin >> day;
        cout << "Enter month: " << endl;
        cin >> month;
        cout << "enter year" << endl;
        cin >> year;
    }

    void printDate()
    {
        cout << day << "/" << month << "/" << year;
    }
};

class Person
{

private:
    string name;
    string address;
    Date birthdate; // Date is class and its called tight coupling
public:
    Person() : name(""), address("") {}

    void acceptRecord()
    {
        cout << "name: " << endl;
        cin >> name;
        cout << "birthdate" << endl;
        birthdate.acceptDate();
    }
    void printRecord()
    {
        cout << name << endl;
        cout << address << endl;
        birthdate.printDate();
    }
};

class Student
{

private:
    int id;
    double marks;
    string course;
    Date *joining_date;
    Date end_date;

public:
    void acceptRecord()
    {
        cout << endl
             << "id" << endl;
        cin >> id;
        cout << "marks" << endl;
        cin >> marks;
        cout << "Enter joining date" << endl;
        joining_date->acceptDate();
        cout << "end_date" << endl;
        end_date.acceptDate();
    }

    void printRecord()
    {
        cout << "id:" << id << endl;
        cout << "marks: " << marks << endl;
        cout << "joining date" << endl;
        joining_date->printDate();
        cout << "end date" << endl;
        end_date.printDate();
    }
    ~Student()
    {
        if (joining_date != NULL)
        {
            delete joining_date;
            joining_date = NULL;
        }
    }
};

int main()
{
    Person p1;
    p1.acceptRecord();
    p1.printRecord();
    Student s;
    s.acceptRecord();
    s.acceptRecord();
}