/*
    #include<bits/stdc++.h>
    using namespace std;

    class shape{
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
    int main(){
        shape *s=new shape();
        s->draw();

        // this is an example of upcasting as we are using base class pointer to point to derived class object 
        shape *c=new circle();
        c->draw();

        circle *d=new circle();
        d->draw();

        // downcasting
        shape *s2=new shape();
        circle *c1=(circle*)s2;
        c1->draw();

        return 0;
    }
*/
/*
    Important if the base class method is without virtual keyword  so the evry class written in left that class method will be called 
    class a=new classb() yhan class a ka method call hoga if virtual was not used

    if the base class method is with virtual keyword then the actual object method will be called like class a=new classb() yhan class b ka method call hoga
    kyunki virtual keyword use kiya hoga to actual object method call hoga
*/

/*
#include<bits/stdc++.h>
    using namespace std;

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
    int main(){
        shape *s=new shape();
        s->draw();

        // this is an example of upcasting as we are using base class pointer to point to derived class object 
        shape *c=new circle();
        c->draw();

        circle *d=new circle();
        d->draw();

        // downcasting
        shape *s2=new shape();
        circle *c1=(circle*)s2;
        c1->draw();

        return 0;
    }
*/