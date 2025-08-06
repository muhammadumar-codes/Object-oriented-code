// #include <iostream>
// using namespace std;
// class student
// {
// private:
//     string names;
//     int rollno;
//     double *ptr;

// public:
//     student(string names, int rollno, float cgpa)
//     {
//         this->names = names;
//         this->rollno = rollno;
//         ptr = new double;
//         *ptr = cgpa;
//     }
//     void show()
//     {
//         cout << "The Names  is" << names << endl;
//         cout << "The Rollno  is" << rollno << endl;
//         cout << "The CGPA   is" << *ptr << endl;
//     }
// };
// int main()
// {
//     student objOne("umarkhan", 34, 3.3);
//     objOne.show();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
// private:
//     string names;
//     string fatherNames;
//     int Cgpa;
//     double *ptr;
//     int *ptrMarks ;

// public:
//     student(string names, string fatherName, int Cgpa,int marks)
//     {
//         this->names = names;
//         this->fatherNames = fatherName;
//         ptr =new double ;
//         *ptr=Cgpa;
//         ptrMarks=new int[5];
//         *ptrMarks=marks;

//     }

//    void show(){
//         cout<<"The name is "<<names<<endl;
//         cout<<"The Father Name  is "<<fatherNames<<endl;
//         cout<<"The CGPA  is "<<*ptr<<endl;
//         cout<<"The Marks is "<<*ptrMarks<<endl;

//     }

// };
// int main()
// {

//     student  obj("Umar","khan",3.2,34334314423143414314);
//     obj.show();

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
// private:
//     string names;
//     string collegeName;

// public:
//     student(string names, string collegeName)
//     {
//         this->names = names;
//         this->collegeName = collegeName;
//     }

//     void showData()
//     {
//         cout << "The Name is " << names << endl;
//         cout << "The college  is " << collegeName << endl;
//     }

//     ~ student (){
//         cout<<"Destructer has called here !"<<endl;

//     }
// };
// int main()
// {

//     student sOne("umarKhan", "tamoorKhan");
//     sOne.showData();

//     return 0;
// }