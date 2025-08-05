class student {
private  names: string;

 public fatherName: string;
 protected  rollno: number;

  // constrcuter calling  automatically
  constructor(names: string, fatherName: string, rollno: number) {
    this.names = names;
    this.fatherName = fatherName;
    this.rollno = rollno;
  }
  show(): string {
    return `The names is :${this.names} And  fatherName is ${this.fatherName} And Rolno ${this.rollno}`;
  }
}

const   obj=new student("umarkhan","ghilaf khan",43)
console.log(obj.show())
