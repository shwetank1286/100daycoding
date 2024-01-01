/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//constructor overloading
class complex {
    int a, b;
public:
    complex (){
        a = 0;
        b = 0;
    }
    
    complex (int x, int y){
        a = x;
        b = y;
    }
    
    complex (int x){
        a = x;
        b = 0;
    }
    
    void printNumber(){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1 (4, 5);
    c1.printNumber();
    
    complex c2 (7);
    c2.printNumber();
    
    complex c3 ;
    c3.printNumber();

//constructor with default argument
class simple{
    int data1;
    int data2;
    int data3;
public:
    simple(int a, int b = 9, int c =29){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};
void simple :: printData (){
    cout<<"the value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
}

int main(){
    simple a(1, 4);
    a.printData();

//example of constructor overloading
class constructor{
public:
    float area;
    constructor(){
        area == 0;
    }
    constructor(int a, int b){
        area = a * b;
    }
    void disp(){
        cout<<area<<endl;
    }
};

int main(){
    constructor o;
    constructor o2(10, 20);
    
    o.disp();
    o2.disp();
    return 1;

// return 0;
}

//.................................................*..................................................
//day 17 of 100 day challenge 
//#geek for geek code of the day 01-01-2024
//Array Pair Sum Divisibility Problem
    //code in c+++
class Solution {
  public:
    bool canPair(vector<int> nums, int k) {
        if(nums.size()&1)return false;
        int arr[k]={0};
        for(auto it:nums){
            arr[it%k]+=1;
        }
        for(int i=0;i<k;i++){
            if(i==0){
                if(arr[i]&1)return false;
                else continue;
            }
            if(i==k-i){
                if(arr[i]&1)return false;
            }
            if(arr[i]!=arr[k-i])return false;
        }
        return true;
    }
};

//#leetcode code of the day 01-01-2024
//455. Assign Cookies
//code in c+++
class Solution {
 public:
  int findContentChildren(vector<int>& g, vector<int>& s) {
    ranges::sort(g);
    ranges::sort(s);

    int i = 0;
    for (int j = 0; j < s.size() && i < g.size(); ++j)
      if (g[i] <= s[j])
        ++i;

    return i;
  }
};
