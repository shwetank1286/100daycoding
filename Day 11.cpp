/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
/*    
class complex{
    int a, b;
    public:
        void setNumber (int n1, int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};


int main()
{
    complex c1, c2;
    
    c1.setNumber(1, 4);
    c1.printNumber();
    
    c2.setNumber(4, 8);
    c2.printNumber();



//printing the same above code with the help of for loop 
class complex{
    int a, b;
    public:
        void setNumber (int n1, int n2){
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};


int main()
{
    complex c1;
    
    // c1.setNumber(1, 4);
    // c1.printNumber();
    
    // c2.setNumber(4, 8);
    // c2.printNumber();
    //in the down for loop the code will be printed as per the (j)
    for (int i = 2, j = 3; i < 5, j < 6; i++, j++) {
        c1.setNumber(i, j);
        c1.printNumber();
    }
    
    
    
//friend function in OOPs
class complex{
    int a, b;
    public:
        void setNumber (int n1, int n2){
            a = n1;
            b = n2;
        }
        //this is the friend function of the code 
        //with the help of the friend function the sumComplex will be able to use the private class of the complex class.....
        friend complex sumComplex(complex o1, complex o2);
        void printNumber(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}


int main()
{
    complex c1, c2;
    complex sum;
    
    c1.setNumber(1, 4);
    c1.printNumber();
    
    c2.setNumber(4, 8);
    c2.printNumber();
    
    //this will print the sum of the both the complex printed 
    //1 + 4i
    //4 + 8i
    //5 + 12i it will print the numbers seperately 
    sum = sumComplex(c1, c2);
    sum.printNumber();
 
//lets see one example of the friend function
//create a global function as a friend 
//int a and b are private if we did't have declared then it will be in the private..
//friend function also have the access of the protected ..
class shwetank{
    int a;
    protected:
    int b;
    public:
        shwetank()
        {
            a = 10;
            b = 99;
        }
    friend void objects(shwetank & obj);    
};
void objects(shwetank & obj)
{
    cout<<"the value of a is: "<<obj.a<<endl;
    cout<<"the value of b is: "<<obj.b<<endl;
}

int main(){
    shwetank object1;
    objects(object1);
*/

    return 0;
}