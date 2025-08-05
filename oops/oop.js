
// This is  full oops consept  in javascript 




    class student {
        #salary;
    constructor(salary,name, fatherName, address) {
        this.#salary=salary;
        this.name = name;
        this.fatherName = fatherName;
        this.address = address;
    }

    show() {
        console.log(
        `The name is  ${this.name} And Father Name is ${this.fatherName} And address is ${this.address} And Salary is ${this.#salary}`
        );
    }

    
    // using  Setter to set the  private Varibles
    setttingSalary(salary){
    this.#salary=salary;
    }

    // using getter to show  the teh,set private values .
    
    showSalary(){
        console.log(`The Salary  is  ${this.#salary}`)
    }


    }

    class Feess extends student {
    constructor(name, fatherName, address, Fees, subjects) {
        super(name, fatherName, address);
        this.name = name;
        this.fatherName = fatherName;
        this.address = address;
        this.Fees = Fees;
        this.subjects = subjects;
    }

    show() {
        console.log(
        `The name is  ${this.name} And Father Name is ${this.fatherName} And address is ${this.address} The Fees is  ${this.Fees} And Subjects is ${this.subjects} `
        );
    }
    }

    const stu=new student(50000,"umarkh", "khan", "Bara")
    stu.setttingSalary(900000);
    stu.showSalary();
    const subject = new Feess("umarkh", "khan", "Bara", 3434, "programming coding",);

    const array = [subject,stu];

    array.forEach((element) => {
    console.log(element.show());
    });
