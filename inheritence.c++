// if we are intializing any property or method with the private access specifier then it will 
// not accessible to the main function not inherit in child class and but if we want to access the /
// private property or method in the child class then we can use the protected access specifier.
// protected inherit ho jyga lekin main function me access nahi hoga.

// single inheritence -> when one class inherits another class

// Multilevel inheritence -> when one class inherits another class and then that class inherits another class

// Hirarchial inheritence -> when one class inherits another class and then that class inherits another class and so on

// Multiple inheritence -> when one class inherits multiple classes

// Hybrid inheritence -> when one class inherits multiple classes and then that class inherits another class and so on

/* Class Derivedclass : access-specifier base-class-name{
    body of derived class
} */

// always base classproperty initialized first then derived class property initialized  
#include<bits/stdc++.h>
using namespace std;

class vechile{
    string name;
    public:
    string model;
    int numberoftyre;
    string getname(){
        return this->name;
    }
    vechile(string n,string m,int t){
        cout<<"I am inside vechile constructor"<<endl;
        this->name=n;
        this->model=m;
        this->numberoftyre=t;
    }
    public:
    void startengine(){
        cout<<"Engine started"<<this->name<<" "<<this->model<<" "<<this->numberoftyre<<endl;
    }
    void stopengine(){
        cout<<"Engine stopped"<<this->name<<" "<<this->model<<" "<<this->numberoftyre<<endl;
    }
};
class car:public vechile{
    public:
    int doors;
    string transmission;
    car(string n,string m,int t,int d,string tr):vechile(n,m,t){
        cout<<"I am inside car constructor"<<endl;
        this->doors=d;
        this->transmission=tr;
    }
    void startAc(){
        cout<<"Car AC started for "<<getname()<<" "<<this->model<<" "<<this->numberoftyre<<" "<<this->doors<<" "<<this->transmission<<endl;
    }
    void startengine(){
        cout<<"Car engine started"<<endl;
    }
    void stopengine(){
        cout<<"Car engine stopped"<<endl;
    }
};
int main(){
    car c1("Toyota","Camry",4,4,"Automatic");
    c1.startengine();
    c1.startAc();
    c1.stopengine();
    return 0;
}