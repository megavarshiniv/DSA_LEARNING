#include <iostream>
using namespace std;

class Student
{
private:
    int marks;
    string address;

public:
    string name;

    // Parameterized Constructor
    Student(string name, int marks, string address)
    {
        this->name = name;
        this->marks = marks;
        this->address = address;
    }

    // Copy Constructor
    Student(const Student &other)
    {
        name = other.name;
        marks = other.marks;
        address = other.address;
    }

    void writeCode()
    {
        cout << "Student writes code" << endl;
    }

    void getMarks()
    {
        cout << "Marks: " << marks << endl;
    }

    void displayData()
    {
        cout << "Marks are: " << marks << endl;
        cout << "Name is: " << name << endl;
        cout << "Address is: " << address << endl;
    }

    void setMarks(int marks)
    {
        this->marks = marks;
        cout << "Marks updated" << endl;
    }

    void setData(string name, int marks, string address)
    {
        this->name = name;
        if (marks >= 0)
        {
            this->marks = marks;
        }
        this->address = address;
    }
};

int main()
{
    int marks;
    string name, address;

    cin >> marks >> name >> address;

    Student s1(name, marks, address);
    Student s2(s1); // Copy constructor

    cout << "\nStudent 1 Details:" << endl;
    s1.displayData();

    // Update marks using setter
    s1.setMarks(95);

    cout << "\nAfter Updating Marks:" << endl;
    s1.displayData();

    cout << "\nCopied Student Details:" << endl;
    s2.displayData();

    return 0;
}