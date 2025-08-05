// What is this in cpp:
// this  refer to current object property in pointer if You write the full names of property as same to parameter it can solve by this


#include <iostream>
using namespace std;
class student
{
private:
    string names;
    string fatherName;
    string address;

public:
    student(string names, string fatherName, string address)
    {
        this->names = names;
        this->fatherName = fatherName;
        this->address = address;
    }

    void printData()
    {
        cout << "The names is  " << names << "The FatherNames " << fatherName << "address is " << address << endl;
    }
};

main()
{
    student obj("Umar Khan", "Ghilaf Khan", "speen dhand");
    obj.printData();

    return 0;
}