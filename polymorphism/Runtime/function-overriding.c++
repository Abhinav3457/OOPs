//  Function Overriding in C++
// #include<bits/stdc++.h>
// using namespace std;

// now the all 3 output will show Drawing shape as it was doing early binding as we see in code as i write
// shawshape(&c); it will call the draw function of shape class as it was early binding but
//  we want to call the draw function of circle class so to do this we have to use virtual keyword in base class function so 
// that it will do late binding and call the draw function of circle class

// below code was early binding as i call it saw like s->draw() ok lets print shape class draw.
/* class shape{
    public:
        void draw(){
            cout<<"Drawing Shape"<<endl;
        }
};
class circle:public shape{
    public:
        void draw(){
            cout<<"Drawing Circle"<<endl;
        }
};  
class rectangle:public shape{
    public:
        void draw(){
            cout<<"Drawing Rectangle"<<endl;
        }
};
void showshape(shape *s){
    s->draw();
}
int main(){
    shape s;
    circle c;
    rectangle r;
    showshape(&s);
    showshape(&c);
    showshape(&r);
}
*/

// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
 
// runtime polymorphism is used to get the output of the derived class function when we call the base 
// class pointer to derived class object and call the function of base class so that it will call the derived class function instead of base class function as we want to do late binding so that it will call the derived class function instead of base class function and it will do late binding
// mean the output will derived at run time not at compile time so to do this we have to use virtual keyword in base class function so that it will do late binding and call the draw function of circle class

// virtual means dont this as an serious function and do late binding and call the derived class function instead of base class function
// take virtual function decison at runtime not at compile time 
// if i want to call relevant function from the base class pointer so i had to make that class pointer as an virtual functionso that it can perform late binding rather then early binding 
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
below code is an exaple of the runtime polymorphism as we see in the code as i write
its your choice to write override keyword in derived class function or not but it is good practice to write override keyword in derived class function so that it will give an error if we make any mistake in the function signature of derived class function and it will also make the code more readable and understandable for other programmers who will read your code in future
*/

/*
class shape{
    public:
        virtual void draw(){
            cout<<"Drawing Shape"<<endl;
        }
};
class circle:public shape{
    public:
        void draw()override{
            cout<<"Drawing Circle"<<endl;
        }
};
class rectangle:public shape{
    public:
        void draw()override{
            cout<<"Drawing Rectangle"<<endl;
        }
};
class triangle:public shape{
    public:
        void draw()override{
            cout<<"Drawing Triangle"<<endl;
        }
};
void showshape(shape *s){
    s->draw();//draw is polymorphic function as it is virtual function so it will do late binding and call the derived class function instead of base class function
}
int main(){
    shape s;
    circle c;
    rectangle r;
    triangle t;

    showshape(&s);
    showshape(&c);
    showshape(&r);
    showshape(&t);
}
    
*/

