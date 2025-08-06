// // #include <iostream>
// // using namespace std;

// // // Abstract class
// // class Animal {
// // public:
// //     // Pure virtual function (No body)
// //     virtual void makeSound() = 0;

// // };

// // // Derived class
// // class Dog : public Animal {
// // public:
// //     void makeSound() {
// //         cout << "Dog says: Woof Woof!" << endl;
// //     }
// // };

// // // Derived class
// // class Cat : public Animal {
// // public:
// //     void makeSound() {
// //         cout << "Cat says: Meow Meow!" << endl;
// //     }
// // };

// // int main() {
// //     Dog d;
// //     Cat c;

// //     d.makeSound();  // Woof Woof
// //     c.makeSound();  // Meow Meow
// //      // Animal is eating...

// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// class Person {
// protected:
//     string name;

// public:
//     // Pure virtual function => abstraction
//     virtual void show() = 0;  // Abstract method
// };

// class Student : public Person {
//     string address;

// public:
//     Student(string name, string address) {
//         this->name = name;
//         this->address = address;
//     }

//     void show() {
//         cout << "Name: " << name << endl;
//         cout << "Address: " << address << endl;
//     }
// };

// int main() {
//     Student obj("Umar Khan", "Peshawar");
//     obj.show();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
// protected:
//     string names;

// public:
//     virtual void show() = 0;
// };

// class boys
// {
// protected:
//     string names;
//     string address;

// public:
//     boys(string names, string address)
//     {
//         this->names = names;
//         this->address = address;
//     }

//     void show()
//     {
//         cout << "The names is" << names << endl;
//         cout << "The Address is" << address << endl;
//     }
// };

// int main()
// {

//     boys obj("umarkhan","speen dhand");
//     obj.show();



//     return 0;
// }