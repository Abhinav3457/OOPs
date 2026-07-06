#define BIRD_H
#include <iostream>
using namespace std;

class Bird{
    public:
    virtual void fly()=0; // pure virtual function
    virtual void eat()=0; // pure virtual function
    // any class that inherit from this class 
    // must implement these pure virtual functions
};
class Sparrow: public Bird{
    private:
    void fly() override{
        cout<<"Sparrow is flying"<<endl;
    }
    void eat() override{
        cout<<"Sparrow is eating"<<endl;
    }
};
class Eagle: public Bird{
    public:
    void fly() override{
        cout<<"Eagle is flying"<<endl;
    }
    void eat() override{
        cout<<"Eagle is eating"<<endl;
    }
};
class Penguin: public Bird{
    public:
    void fly() override{
        cout<<"Penguin can't fly"<<endl;
    }
    void eat() override{
        cout<<"Penguin is eating"<<endl;
    }
};