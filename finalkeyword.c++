// final keyword in c++ is used to prevent the inheritance of a class 
// or to prevent the overriding of a virtual function in derived classes. 
// When a class is declared with the final keyword, it cannot be inherited by any other class.

// #include <bits/stdc++.h>
// using namespace std;

// final with class
/*
    class the below code is an example of final keyword in c++ as we see in the code as i write final with the base class 
    so that it cannot be inherited by any other class and if we try to inherit it then it will give an error as we see in the code 
    as i write final with the base class so that it cannot be inherited by any other class and if we try to inherit it then it will give an error

    class Base final{
    public:
        virtual void display() {
            cout << "Base class display function" << endl;
        }
    };
    class child:public Base {
    public:
        void display(){
            cout<<"child class display function"<<endl;
        }
    };
    class grandchild:public Base{
    public:
        void display(){
            cout<<"grandchild class display function"<<endl;
        }
    };
*/
/* ------------------------------------------------------------------------------------------------------------------

 now as we can saw that our virtual function written with final key word we are not able to override it in the derived class 
    final with virtual function web can not override this function

    class Base {
    public:
        virtual void display()final {
            cout << "Base class display function" << endl;
        }
    };
    class child:public Base {
    public:
        void display(){
            cout<<"child class display function"<<endl;
        }
    };

    class grandchild:public Base{
    public:
        void display(){
            cout<<"grandchild class display function"<<endl;
        }
    };
*/