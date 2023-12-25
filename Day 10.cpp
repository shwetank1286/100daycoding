/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//array of object
class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary=122;
            cout<<"Enter the id of the Employee"<<endl;
            cin>>id;
        }
        void getId(void){
            cout<<"the id of the Employee is "<<id<<endl;
        }
};
int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++) {
        fb[i].setId();
        fb[i].getId();
    }
    
//passing object as function
class complex{
    int a;
    int b;
    public:
    void setdata(int v1, int v2){
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void printNumber(){
        cout<<"your complex number "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.printNumber();
    
    c2.setdata(3, 4);
    c2.printNumber();
    
    c3.setdata(6, 5);
    c3.printNumber();

// passing object as function with for loop
class complex{
    int a;
    int b;
    public:
    void setdata(int v1, int v2){
        a = v1;
        b = v2;
    }
    void setDataBySum(complex o1, complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void printNumber(){
        cout<<"your complex number "<<a<<" + "<<b<<"i"<<endl;
    }
};
int main(){
    complex c1;
    // c1.setdata(1, 2);
    // c1.printNumber();
    
    // c1.setdata(3, 4);
    // c1.printNumber();
    
    // c1.setdata(6, 5);
    // c1.printNumber();
    for (int i = 2, j = 4; i < 6, j <8; i++, j++) {
        c1.setdata(i, j);
        c1.printNumber();
    }

    

    return 0;
}

//.................................................*..................................................
//day 10 of 100 day challenge 
//#geek for geek code of the day 25-12-2023
//determinant of a merix
    //code in c+++
class Solution
{   
    public:
    //Function for finding determinant of matrix.
   int determinantOfMatrix(vector<vector<int> > matrix, int n)
    {
        if(n==1)return matrix[0][0];
        int m = 0;
        int ans = 0;
        for(int i=0;i<n;i++){
            vector<vector<int>>InnerMat(n-1, vector<int>(n-1));
            int p = 0;
            for(int j=1; j<n; j++){
                int q = 0;
                for(int k=0; k<n; k++){
                    if(k==i){
                        continue;
                    }
                    InnerMat[p][q++] = matrix[j][k];
                }
                p++;
            }
            if(i%2==0)ans+=(matrix[m][i])*(determinantOfMatrix(InnerMat,n-1));
            else ans-=(matrix[m][i])*(determinantOfMatrix(InnerMat,n-1));
        }
        return ans;
    } 
};

//#leetcode code of the day 25-12-2023
//decode Ways
//code in c+++
class Solution {
 public:
  int numDecodings(string s) {
    const int n = s.length();
    // dp[i] := the number of ways to decode s[i..n)
    vector<int> dp(n + 1);
    dp[n] = 1;  // ""
    dp[n - 1] = isValid(s[n - 1]);

    for (int i = n - 2; i >= 0; --i) {
      if (isValid(s[i]))
        dp[i] += dp[i + 1];
      if (isValid(s[i], s[i + 1]))
        dp[i] += dp[i + 2];
    }

    return dp[0];
  }

 private:
  bool isValid(char c) {
    return c != '0';
  }

  bool isValid(char c1, char c2) {
    return c1 == '1' || c1 == '2' && c2 < '7';
  }
};

