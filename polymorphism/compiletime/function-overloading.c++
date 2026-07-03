/*
Polymorphism is ability of different objects to respond to the same function call or message int their own unique way.

same name but work different different 
COMPILE TIME POLYMORPHISM
to achieve it we have function overloading
we just had to do a thing like same function name different datatypes and we are good to go 
eg :- int sum(int a,int b) return a+b;
double sum(double a,double b) return a+b;
*/
// funcion overloading example

#include <bits/stdc++.h>
using namespace std;
class Add{
    public:
    int sum(int a,int b){
        cout<<"Sum of Integer :- "<<endl;
        return a+b;
    }
    double sum(double a,double b){
        cout<<"Sum of DOuble :- "<<endl;
        return a+b;
    }
};
int main(){
    Add add;
    cout<<add.sum(5,7);
    cout<<endl;
    cout<<add.sum(52.8,62.9);
}
