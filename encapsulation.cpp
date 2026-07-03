#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    string gf;
    int age;
    int phone;
    string name;
    int rollno;
    int marks;
    float*gpa;
    public:
    void setname(string name){
        this->name=name;
    }
    void getname(){
        cout<<"my gf name is "<<this->name<<"\n";
    }
};
int main(){
    student s1;
    s1.setname("Abhinav");
    s1.getname();
}