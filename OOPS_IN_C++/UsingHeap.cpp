#include <iostream>
using namespace std;
class student
{
private:
    string names;
    int rollno;
    double *ptr;

public:
    student(string names, int rollno, float cgpa)
    {
        this->names = names;
        this->rollno = rollno;
        ptr = new double;
        *ptr = cgpa;
    }
    void show()
    {
        cout << "The Names  is" << names << endl;
        cout << "The Rollno  is" << rollno << endl;
        cout << "The CGPA   is" << *ptr << endl;
    }
};
int main()
{
    student objOne("umarkhan", 34, 3.3);
    objOne.show();

    return 0;
}