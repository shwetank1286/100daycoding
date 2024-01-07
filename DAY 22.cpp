/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
/*
//example of dynamically initializing of object
class geeks{
    int* ptr;
public:
    geeks()//defaul constructor
    {
        ptr = new int;//dynamically initializing
        *ptr = 10;
    }
    
    void display()
    {
        cout <<*ptr<<endl;
    }
};
int main()
{
    geeks obj1;
    obj1.display();
}
*/
/*//copy constructor

*/

class number{
    int a;
public:
    number(){
        a=0;
    }
    number(int num){
        a=num;
    }
    // number(number &obj){
    //     a=obj.a;
    // }
    void display(){
        cout<<"the number for this object is "<<a<<endl;
    }
};
int main(){
    number x, y, z(45);
    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();

    return 0;
}