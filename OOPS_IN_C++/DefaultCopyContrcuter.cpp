#include <iostream>
using namespace std;
class Toyota
{
private:
    string carName;
    string number;

public:
    // using this  to assign the object property to   parameter of constructer
    Toyota(string carName, string number)
    {
        this->carName = carName;
        this->number = number;
    }
    Toyota  (Toyota &obj){
        this->carName=obj.carName;
        this->number=obj.number;

    }

    void show()
    {
        cout << "The Car Number is :" << carName << "The Number is " << number << endl;
    }
};
int main()
{

    // Now This is called Default copy constrcuter
    // it mean that we copy the constructer of first object to another object but it takes place in constrcuter coding

    Toyota obj("Corolla", "AF3434");
    Toyota objTwo("Corolla", "AF3434");
    objTwo.show();

    // Toyota obj2(obj);
    obj.show();
    

    return 0;
}
