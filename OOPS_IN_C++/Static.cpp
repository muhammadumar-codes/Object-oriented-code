//With out Static  if you Declear any varibles and work on it and goes to callstack and deelet the memory if your used the static keyword with this it doesonot lost and work for life time

#include <iostream>
using namespace std;
class student
{
private:
    string names;
    string fatherName;

public:
    student(string names, string fatherName)
    {
        this->names = names;
        this->fatherName = fatherName;
    }

    void show()
    {
        static int obj = 1;
        cout << "The name is" << names << endl;
        cout << "The name is" << fatherName << endl;
        cout << "Object Created !" << obj << endl;

        obj++;
    }
};
int main()
{

    student objs("umarkhan", "khan");
    objs.show();
    objs.show();
    objs.show();

    return 0;
}