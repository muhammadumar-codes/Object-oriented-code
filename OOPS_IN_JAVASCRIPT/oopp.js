"use strict";
class student {
    // constrcuter calling  automatically
    constructor(names, fatherName, rollno) {
        this.names = names;
        this.fatherName = fatherName;
        this.rollno = rollno;
    }
    show() {
        return `The names is :${this.names} And  fatherName is ${this.fatherName} And Rolno ${this.rollno}`;
    }
}
const obj = new student("umarkhan", "ghilaf khan", 43);
console.log(obj.show());
