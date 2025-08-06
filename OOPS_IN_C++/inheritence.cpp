//Notes For constrcuter.
//First of all when the constructer is called  in inhertinces ?
//in inheritences when the parent is is inherit to child the parent contstrucer is called First in alll
// after of parent class the child constructer iscalled ?



// Note For Distructer
// when  in inheritence frist of  called the child distrcuter then the called then it goes to parent disctructer 


#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    string fatherName;
    int age;
    string address;

public:
    person()
    {
        cout << "The Parent constructer  is called !" << endl;
    }

    ~person()
    {
        cout << "The parent contstrcuter is called here !" << endl;
    }
};

class student : public person
{
private:
    string className;

public:
    student(string name, string fatherName, string className, int age, string address)
    {
        this->name = name;
        this->fatherName = fatherName;
        this->className = className;
        this->age = age;
        this->address = address;
    }

    void showInfo()
    {
        cout << "The name is " << name << endl;
        cout << "The FatherName is " << fatherName << endl;
        cout << "The class Name is " << className << endl;
        cout << "The age is  : " << age << endl;
        cout << "The address is  : " << address << endl;
    }

    student()
    {
        cout << "The child constrcuer is  is called !" << endl;
    }

    ~student()
    {
        cout << "The child Distructer  is called here !" << endl;
    }
};

int main()
{
    student obj("umar khan", "Khan", "3rd", 34, "speen dhand");
    obj.showInfo();

    return 0;
}