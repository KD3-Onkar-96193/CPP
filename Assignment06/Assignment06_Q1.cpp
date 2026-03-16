
#include <iostream>
using namespace std;

class Product
{
protected:
    int id;
    string title;
    float price;

public:
    virtual void accept() = 0;
    virtual float calculatePrice() = 0;
    virtual void display() = 0;
    virtual ~Product() {}
};

class Book : public Product
{
    string author;

public:
    void accept()
    {
        cout << "Enter Book ID: ";
        cin >> id;
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Author: " << endl;
        cin >> author;
        cout << "Enter Price: ";
        cin >> price;
    }

    float calculatePrice()
    {
        return price * 0.90;
    }

    void display()
    {
        cout << "Book ID: " << id
             << ", Title: " << title
             << ", Author: " << author
             << ", Final Price: " << calculatePrice() << endl;
    }
};

class Tape : public Product
{
    string artist;

public:
    void accept()
    {
        cout << "Enter Tape ID: ";
        cin >> id;
        cout << "Enter Tape Title: ";
        cin >> title;
        cout << "Enter Artist: ";
        cin >> artist;
        cout << "Enter Price: ";
        cin >> price;
    }

    float calculatePrice()
    {
        return price * 0.95;
    }

    void display()
    {
        cout << "Tape ID: " << id
             << ", Title: " << title
             << ", Artist: " << artist
             << ", Final Price: " << calculatePrice() << endl;
    }
};

int main()
{
    Product *arr[3];
    int choice;
    float total = 0;

    for (int i = 0; i < 3; i++)
    {
        cout << "1. Book  2. Tape \n Enter choice: ";
        cin >> choice;

        if (choice == 1)
            arr[i] = new Book();
        else if (choice == 2)
            arr[i] = new Tape();
        else
        {
            cout << "Invalid choice\n";
            i--;
            continue;
        }

        arr[i]->accept();
    }

    cout << "Bill Details" << endl;

    for (int i = 0; i < 3; i++)
    {
        arr[i]->display();
        total += arr[i]->calculatePrice();
    }

    cout << "\nTotal Bill: " << total << endl;

    for (int i = 0; i < 3; i++)
    {
        delete arr[i];
    }

    return 0;
}