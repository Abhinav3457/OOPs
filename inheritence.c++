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

/*Constructor always calls first for base class then child class and destructor always child class called 
first then base class*/

// always base-parent class property initialized first then derived class property initialized  
#include<bits/stdc++.h>
using namespace std;

class vechile{
    // string name;
    protected:
    string name;
    string model;
    int numberoftyre;
    
    public:
    string getname(){
        return this->name;
    }
    vechile(string n,string m,int t){
        cout<<"I am inside vechile constructor"<<endl;
        this->name=n;
        this->model=m;
        this->numberoftyre=t;
    }
    void startengine(){
        cout<<"Engine started"<<this->name<<" "<<this->model<<" "<<this->numberoftyre<<endl;
    }
    void stopengine(){
        cout<<"Engine stopped"<<this->name<<" "<<this->model<<" "<<this->numberoftyre<<endl;
    }
    ~vechile(){
        cout<<"vechile dtor"<<endl;
    }
};
class motorcycle:public vechile{
    protected:
    string handle;
    string suspension;
    public:
    motorcycle(string n,string m,int t,string h,string sus):vechile(n,m,t){
        cout<<"motorcycle ctor called"<<endl;
        this->handle=h;
        this->suspension=sus;
    }
    void villi(){
        cout<<"villi done"<<name<<endl;
    }
    ~motorcycle(){
        cout<<"dtor motercyle"<<endl;
    }
};
class car:
public vechile{
    protected:
    int doors;
    string transmission;
    public:
    car(string n,string m,int t,int d,string tr):vechile(n,m,t){
        cout<<"I am inside car constructor"<<endl;
        this->doors=d;
        this->transmission=tr;
    }
    /*getname() used when the attribute is in private acess specifier*/
    void startAc(){
        cout<<"Car AC started for "<<name<<" "<<this->model<<" "<<this->numberoftyre<<" "<<this->doors<<" "<<this->transmission<<endl;
    }
    ~car(){
        cout<<"dtor car"<<endl;
    }
};
int main(){
    car c1("Toyota","Camry",4,4,"Automatic");
    // c1.startAc();
    // m.stopengine();
    // string name=c1.getname();
    // cout<<m.getname()<<" private fetch by get "<<endl;
    return 0;
}