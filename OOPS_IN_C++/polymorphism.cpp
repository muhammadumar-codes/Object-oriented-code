// 🔶 What is Polymorphism?
// Polymorphism ka matlab hota hai:

// "One name, many forms."

// Iska matlab yeh hai ke ek function ya operator different ways mein behave kar sakta hai, depending on the context.

// | Type | Name                  | Detail                                  |
// | ---- | --------------------- | --------------------------------------- |
// | 1️⃣  | Compile-time (Static) | Overloading (Function + Operator)       |
// | 2️⃣  | Run-time (Dynamic)    | Virtual Functions (Function Overriding) |

// compile time polymorphism.

// #include <iostream>
// using namespace std;
// class student
// {
// private:
//     string names;
//     int age;
//     string address;

// public:
//     void show()
//     {
//         cout << "No paramter" << endl;
//     }

//     void show(string names, int age)
//     {
//         this->names = names;
//         this->age = age;

//         cout << "The name is" << names << endl;
//         cout << "The Age is" << age << endl;
//     }

//     void show(string names, int  age, string address){
//         this->names=names;
//         this->age=age;
//         this->address=address;


//     }




// };

// int main()
// {
//     student obj;
//     obj.show();
//     obj.show("Umar", 90);
//     obj.show("Umar", 90 ,"speen dhand Bar");

//     return 0;
// }






#include <iostream>
using namespace std;
class student
{
private:
    string names;
    int age;
    string address;

public:
    void show()
    {
        cout << "No paramter" << endl;
    }

    void show(string names, int age)
    {
        this->names = names;
        this->age = age;

       
    }

    void show(string names, int  age, string address){
        this->names=names;
        this->age=age;
        this->address=address;


    }

    void outPutSecound(){
        cout<<"The names is"<<names<<endl;
        cout<<"The  Age is"<<age<<endl;

    }

     void outThreeParameter (){
        cout<<"The names is"<<names<<endl;
        cout<<"The  Age is"<<age<<endl;
        cout<<"The  Address is"<<address<<endl;

    }




};

int main()
{
    student obj;
    obj.show();
    obj.show("Umar", 90);
    obj.outPutSecound();
    obj.show("Umar", 90 ,"speen dhand Bar");
    obj.outThreeParameter();
    

    return 0;
}