// Abstract class is used to define a common interface for a group of related classes.
//  It cannot be instantiated directly, but it can be used as a base class for other classes. An abstract class contains at least one pure virtual function, which is a function that has no implementation in the base class and must be implemented by derived classes.
// interface bnane s hume code ko bs ek baar likhna hota h or hum usme single line change kar k use kar sakte h baar baar implementation change nhi karni padti .

#include <bits/stdc++.h>
#include "bird.h"
using namespace std;

void birddoessomethin(Bird* &bird){
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
}
int main(){

    Bird *bird1 = new Penguin();
    birddoessomethin(bird1);
}
