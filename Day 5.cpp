/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
    
//call by pointers reference two numbers
    void swapPointers(int *a, int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    int main(){
        int x=4, y=5;
        cout << "The value of x is " <<x<< " the value of y is "<<y<<endl;
        swapPointers(&x, &y);
        cout << "The value of x is " <<x<< " the value of y is "<<y<<endl;
        
//call by pointers reference three value
    void swapPointers(int *a, int *b, int *c){  //temp a b c
        int temp = *a;                          //  4  4 5 7
        *a = *b;                                //  4  5 5 7
        *b = *c;                                //  4  5 7 7
        *c = temp;                              //  4  5 7 4
    }
    int main(){
        int x=4, y=5, z=7;
        cout << "The value of x is " <<x<< " the value of y is "<<y<<" the value of z is "<<z<<endl;
        swapPointers(&x, &y, &z);
        cout << "The value of x is " <<x<< " the value of y is "<<y<<" the value of z is "<<z<<endl;
        
//call by reference variable  value
    void swapReferencevar(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    int main(){
        int x=4, y=5;
        cout << "The value of x is " <<x<< " the value of y is "<<y<<endl;
        swapReferencevar(x, y);
        cout << "The value of x is " <<x<< " the value of y is "<<y<<endl;
        
//call by reference variable  value
    void swapReferencevar(int &a, int &b, int &c){
        int temp = a;
        a = b;
        b = c;
        c = temp;
    }
    int main(){
        int x=4, y=5, z=8;
        cout << "The value of x is " <<x<< " the value of y is "<<y<<" the value of z is "<<z<<endl;
        swapReferencevar(x, y, z);
        cout << "The value of x is " <<x<< " the value of y is "<<y<<" the value of z is "<<z<<endl;
        
// inline functions
    inline int product(int a, int b){
        return a*b;
    }
    int main(){
        int a, b;
        cout<<"the the value of a and b"<<endl;
        cin>>a>>b;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
    
// static 
    int product(int a, int b){
        static int c=0;
        c = c+1;
        return a*b+c;
    }
    int main(){
        int a, b;
        cout<<"the the value of a and b"<<endl;
        cin>>a>>b;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
        cout<<"product of a and b is "<<product(a,b)<<endl;
    
//defaul arguments
    float moneyreceived (int currentmoney, float factor = 1.04){
        return currentmoney*factor;
    }
    int main(){
        int a , b;
        int money = 100000;
        cout<<"If you have "<<money<<" in your bank account, yopu will get "<<moneyreceived(money)<<" after 1 year"<<endl;
        cout<<"for VIP, If you have "<<money<<" in your bank account, yopu will get "<<moneyreceived(money, 1.1)<<" after 1 year";

//.................................................*..................................................
//day5 of 100 day challenge 
//#geek for geek code of the day 20-12-2023
//Modified Game of Nim
    //code in c+++
class Solution{
    public:
    int findWinner(int n, int A[]){
       int xorr=0;
       for(int i=0; i<n; i++)
       xorr^=A[i];
       if(!xorr)
       return 1;
       else
       return(n%2)+1;
    }
};
//#leetcode code of the day 20-12-2023
//2706. Buy Two Chocolates
//code in c+++
class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(), prices.end());
        int price = prices[0]+prices[1];
        if(price <= money)
        {
            return money-price;
        }
        return money;
    }
};
