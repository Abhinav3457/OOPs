#include<bits/stdc++.h>
using namespace std;

// global variable a
// int a=10;

// int main(){
//     cout<<a;
//     return 0;
// }


// local variable a
// int a=30;//global variable a
// int main(){
//     int a=10; //local variable a
//     cout<<a;  // prints local variable a
//     cout<<endl;
//     cout<<::a; // prints global variable a
//     return 0;
// }

int x=20;

void func(){
    int x=111;
    cout<<x<<endl;
    ::x=895;
    cout<<::x<<endl;
}
int main(){
    cout<<::x<<"\n";

    int x=50;
    {
        int x=30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;
    func();
}