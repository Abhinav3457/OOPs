#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int rollno;
    int age;
    int marks;
    float *gpa;
    // default constructor
    // Student(){
    //     cout<<"Constructor called"<<endl;   
    // }

    // parameterized constructor
    Student(string name,int rollno,int age,int marks,float gpa){
        this->name=name;
        this->rollno=rollno;
        this->age=age;
        this->marks=marks;
        this->gpa=new float(gpa);
    }
    Student(const Student &s){
        this->name=s.name;
        this->rollno=s.rollno;
        this->age=s.age;
        this->marks=s.marks;
        this->gpa=new float(*s.gpa);
    }
    void bunk(){
        cout<<this->name<<" is bunking class"<<endl;
    }
    void display(){
        cout<<"Name: "<<this->name<<endl;
        cout<<"Roll No: "<<this->rollno<<endl;
        cout<<"Age: "<<this->age<<endl;
        cout<<"Marks: "<<this->marks<<endl;
        cout<<"GPA: "<<*this->gpa<<endl;
    }
    void school(){
        cout<<this->name<<" is going to school"<<endl;
    }
    ~Student(){
        cout<<"Destructor called"<<endl;
        delete gpa;
    }
};
int main(){
    // Student s1;
    // s1.name="Abhinav";
    // s1.age=20;
    // s1.rollno=101;
    // s1.marks=85;
    // s1.display();
    // s1.bunk();
    // s1.school();
    // Student s2("Mohan",101,20,85);//in stack memory
    // Student c=s2;
    // cout<<"From copy constructor"<<endl;
    // c.display();
    // cout<<"From parameterized constructor"<<endl;
    // s2.display();

    // -> arrow used here to access the members of the class when we are using pointer to object
    Student *A=new Student("Abhinav",101,20,85,8.7);//in heap memory
    A->display();
    delete A;//deleting the object from heap memory
}