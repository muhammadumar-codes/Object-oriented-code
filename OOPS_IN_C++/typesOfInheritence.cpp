//  Single  type of inheritences to inheritence one child  from parent so this single inheritence is called the  single inheritences
// Multi-level inhertinces   type of inheritence to inherit from many times .........
// Multiple inheritence is used  when one  child class inherite more data from many parents

// Example for Multiple  type inbheritences
#include <iostream>
using namespace std;
class Human
{
protected:
    string names;
};

class boy
{
protected:
    string fatherName;
    string address;
};
class Girls : public Human ,public boy
{
    protected:
    int age;
    
    public:
    Girls(string names, string fatherName, string address,int age)

    {
        this->names=names;
        this->fatherName=fatherName;
        this->address=address;
        this->age=age;
    }

public:

    void show(){
        cout<<"The Names is "<<names<<endl;
        cout<<"The FatherName  is "<<fatherName<<endl;
        cout<<"The Address is "<<address<<endl;
        cout<<"The Names is "<<age<<endl;

    }
};

int main()
{


    Girls obj("Eman","Balyamaeen","Bara",20);
    obj.show();



    return 0;
}
