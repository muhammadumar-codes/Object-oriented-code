#include <iostream>
using namespace std;
class person
{
protected:
    string names;
    string fatherName;

public:
    person(string names, string fatherName)
    {
        this->names = names;
        this->fatherName = fatherName;
    }

    void showData()
    {
        cout << "The Name is " << names << endl;
        cout << "The fatherName is " << fatherName << endl;
    }
};
class student : public person
{
protected:
    string address;

public:
    student(string names, string fatherName, string address) : person(names, fatherName)
    {
        this->names = names;
        this->fatherName = fatherName;
        this->address = address;
    }
    void showData()
    {
        cout << "The Names is " << names << endl;
        cout << "The FatherName  is " << fatherName << endl;
        cout << "The Address is " << address << endl;
    }
};

class ClassTen : public student
{
protected:
    int marks;

public:
    ClassTen(string names, string fatherName, string address, int marks) : student(names, fatherName, address)
    {
        this->marks = marks;
    }
    void showData()
    {
        cout << "The Names is " << names << endl;
        cout << "The FatherName  is " << fatherName << endl;
        cout << "The Address is " << address << endl;
        cout << "The marks is " << marks << endl;
    }
};

int main()
{

    ClassTen Obj("Sudais", "Abu jan", "Bara", 1046);
    Obj.showData();

    return 0;
}