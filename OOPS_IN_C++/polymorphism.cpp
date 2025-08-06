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

//     }

//     void show(string names, int  age, string address){
//         this->names=names;
//         this->age=age;
//         this->address=address;

//     }

//     void outPutSecound(){
//         cout<<"The names is"<<names<<endl;
//         cout<<"The  Age is"<<age<<endl;

//     }

//      void outThreeParameter (){
//         cout<<"The names is"<<names<<endl;
//         cout<<"The  Age is"<<age<<endl;
//         cout<<"The  Address is"<<address<<endl;

//     }

// };

// int main()
// {
//     student obj;
//     obj.show();
//     obj.show("Umar", 90);
//     obj.outPutSecound();
//     obj.show("Umar", 90 ,"speen dhand Bar");
//     obj.outThreeParameter();

//     return 0;
// }

// Run Time polymorphism Decide to do tit Best Exmaple for it 




#include <iostream>
using namespace std;

class person
{
protected:
    string names;

public:
    person(string names)
    {
        this->names = names;
    }

 virtual  void show()
    {
        cout << "The names is" << names << endl;
    }
};

class student : public person
{
protected:
    string address;

public:
    student(string names, string add):person ( names)
    {
        this->address = add;
        cout<<"Please check this"<<this->address<<endl;


    }

    void show()
    {
        cout << "The  Names  is       :" << names << endl;
        cout << "The Address  is       :"<< address << endl;
    }
};



class boys : public student
{
protected:
    int boysCount;

public:
    boys(string names, string address, int boy):student ( names ,address)
    {
        this->boysCount=boy;

    }

    void show()
    {
        cout << "The  Names  is       :" << names << endl;
        cout << "The Address  is       :"<< address << endl;
        cout << "The Count of Boys   is       :"<< boysCount << endl;
    }
};

int main()
{

    person *ptr;
    student obj("umarkhan","Bara");
    boys objTwo("gulwali","Town",90);
    
    ptr = &obj;
    ptr->show();

    ptr = &objTwo;
    ptr->show();






    return 0;
}