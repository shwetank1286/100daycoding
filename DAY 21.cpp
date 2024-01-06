/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
class bankDeposit{
    int principal;
    int years;
    float intrestRate;
    float returnValue;
    
    public:
        bankDeposit(){}
        bankDeposit(int p, int y, float r);
        bankDeposit(int p, int y, int r);
        void show();
};

bankDeposit :: bankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    intrestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue = returnValue *(1+intrestRate);
    }
}

bankDeposit :: bankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    intrestRate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue = returnValue *(1+intrestRate);
    }
}

void bankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
    <<". return value after " << years
    <<" years is "<<returnValue<<endl;
}
int main()
{
    bankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    
    cout<<"Enter the value of p y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankDeposit(p, y, r);
    bd1.show();
    
    cout<<"Enter the value of p y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankDeposit(p, y, R);
    bd2.show();
    return 0;
}

//.................................................*..................................................
//day 17 of 100 day challenge 
//#geek for geek code of the day 01-01-2024
//
    //code in c+++


//#leetcode code of the day 01-01-2024
//
//code in c+++
