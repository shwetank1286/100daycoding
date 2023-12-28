/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
//sum of the values of both classes
class Y;
class X{
    int data;
    public:
        void setvalue(int value){
            data = value;
        
        }
    friend void add(X, Y);
};
class Y{
    int num;
    public:
        void setvalue(int value){
            num = value;
        
        }
    friend void add(X, Y);
};

void add(X o1, Y o2){
    cout<<"summing data of X and Y objects give me "<<o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setvalue(6);
    
    Y b1;
    b1.setvalue(6);
    
    add(a1, b1);

    
//another example
//swap with help of classes
class c2;

class c1{
    int val1;
    friend void exchange(c1 &, c2 &);
    public:
        void indata(int a){
            val1 = a;
        }
        void display(void){
            cout <<val1<<endl;
        }
};

class c2{
    int val2;
    friend void exchange(c1 &, c2 &);
    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout <<val2<<endl;
        }
};
void exchange(c1 & x, c2 & y){
    int tmp = x.val1;
    x.val1 = y.val2;
    y.val2 = tmp;
} 
int main(){
    c1 oc1;
    c2 oc2;
    
    oc1.indata(56);
    oc2.indata(76);
    
    exchange(oc1, oc2);
    cout<<"the value of c1 after exchangeinmg becomes: ";
    oc1.display();
    cout<<"the value of c2 after exchangeinmg becomes: ";
    oc2.display();
    
    return 0;
}