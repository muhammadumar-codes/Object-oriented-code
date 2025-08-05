
#include <iostream>
using namespace std;
class Teachers
{

    // Encapsulated !
private:
    int salary;
    string names;
    string departments;
    string subjects;

public:

// constrcuter..
    Teachers(int s, string na, string dep, string sub)

    {
        salary = s;
        names = na;
        departments = dep;
        subjects = sub;
    }

    // This is constructer Overloading...
      Teachers(int s, string na, string dep)

    {
        salary = s;
        names = na;
        departments = dep;
       
    }


    // Destrcuter/
    ~Teachers() { cout << "Destructer called!"<<endl; };

    void show()
    {
        cout << "The names is " << names << "Salary" << salary << "Departments" << departments << "Subjects" << subjects << endl;
    }


//    Settters Funtions....
    void setSalary(double sal){
    salary=sal;
   
    }
    // Getters Funtions.

    double getSalary(){
        return salary;

    }


};

int main()
{

    Teachers obj (500000,"Umar khan","computerScince");
    obj.show();
    obj.setSalary(450);
    cout<<obj.getSalary()<<endl;

 


    

    return 0;
}