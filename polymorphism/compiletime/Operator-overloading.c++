/*
    Operator Overloading in C++ 
*/ 

#include <bits/stdc++.h>
using namespace std;
/*
class c{
    public:
        int real;
        int imaginary;
    c(){
        real=imaginary=-1;
    }
    // c(int r,int i){
    //     this->real=r;
    //     this->imaginary=i;
    // }
    c(int r,int i):real(r),imaginary(i){
        cout<<"I am inside constructor"<<endl;
    }
    void print(){
        cout<<"["<<this->real<<" + "<<this->imaginary<<"i"<<"]"<<endl;
    }
};
int main(){
    c c1(5,6);
    c1.print();
    c c2(10,19);
    c2.print();
    // now a plus operator knows that how to add two int and tw doubles but not know how to addd two complex number so to
    // resolve it we have to overload the operator + for complex number addition
    // cout<<c1+c2<<endl;----------> ERRRRor

    // c c3=c1+c2;----------> ERRRRor
}
*/
class c{
    public:
        int real;
        int imaginary;
    // c(){
    //     real=imaginary=-1;
    // }
    // y jo b h y vo second object h jo + k right side h hum ab is b ki help s uske real or imaginary ko access kr k sum kr k new object m dalenge
    // y operator overloading hoti h 

    // this is operator overloading function to sum two complex numbers
    c operator+(c &b){
        c temp;
        temp.real=this->real+b.real;
        temp.imaginary=this->imaginary+b.imaginary;
        return temp;
    }
    void print(){
        cout<<"["<<this->real<<" + "<<this->imaginary<<"i"<<"]"<<endl;
    }

    c operator=(c &b){
        if(this->real==b.real && this->imaginary==b.imaginary){
            cout<<"Both are same"<<endl;
        }
        else{
            cout<<"Both are not same"<<endl;
        }
        return *this;// this is returning the current object
    }
};
int main(){
    c c1,c2;
    cout<<"Enter the real and imaginary part of first complex number :- "<<endl;
    cin>>c1.real>>c1.imaginary;
    cout<<"Enter the real and imaginary part of second complex number :- "<<endl;
    cin>>c2.real>>c2.imaginary;
    // c c3=c1+c2;
    // c3.print();
    c c4=c1=c2;
    c4.print();
}

