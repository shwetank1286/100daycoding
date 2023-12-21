/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;


//fatorial by recursion
    int factorial(int n){
        if (n<=1){
            return 1;
        }
        return n * factorial(n-1);
    }
        
        
    int main(){
        int a;
        cout<<"Enter the number"<<endl;
        cin>>a;
        cout<<"the factorial of "<<a<<" is "<<factorial(a);

//fibonaci series by recursion
    int fib(int n){
        if (n<2){
            return 1;
        }
        return fib(n-2) + fib(n-1);
    }
    int main(){
        int a;
        cout<<"enter the number"<<endl;
        cin>>a;
        cout<<"the fibonaci of "<<a<<" is "<<fib(a);
    
//functions overloading
    int sum(int a, int b){
        cout<<"is ";
        return a+b;
    }
    int sum(int a, int b, int c){
        cout<<"are ";
        return a+b+c;
    }
    int sub(int a, int b, int c){
        cout<<"was ";
        return a-b-c;
    }
    int main(){
        cout<<"sum of a and b  "<<sum(3, 5)<<endl;
        cout<<"sum of a, b, c "<<sum(3, 5, 9)<<endl;
        cout<<"sub of a, b, c "<<sub(19, 5, 2)<<endl;
        
//OODP started
//example for classes , private, public
    class Employee
    {
        private:
            int a, b, c;
        public:
            int d, e;
            void setData(int a, int b, int c);
            void getData(){
                cout<<"enter the value of a is "<<a<<endl;
                cout<<"enter the value of a is "<<b<<endl;    
                cout<<"enter the value of a is "<<c<<endl;
                cout<<"enter the value of a is "<<d<<endl;
                cout<<"enter the value of a is "<<e<<endl;
            }
    };
    
    void Employee :: setData(int a1, int b1, int c1){
        a=a1;
        b=b1;
        c=c1;
    }
    int main(){
        Employee shwetank;
        shwetank.d = 34;
        shwetank.e = 98;
        shwetank.setData(2, 9, 10);
        shwetank.getData();
   
    return 0;
}

//.................................................*..................................................
//day6 of 100 day challenge 
//#geek for geek code of the day 21-12-2023
//candy
    //code in c+++
class Solution {
    public:
    int minCandy(int N, vector<int> &ratings) {
       vector<int> v(N,1);
       for (int i=1; i<N; i++){
           if (ratings[i]>ratings[i-1])
           v[i]=v[i-1]+1;
       }
       for(int i=N-2; i>=0; i--){
           if (ratings[i]>ratings[i+1])
           v[i]=max(v[i],v[i+1]+1);
       }
       int sum=0;
       for(int i=0; i<N; i++)
       sum+=v[i];
       return sum;
    }
};
//#leetcode code of the day 21-12-2023
//1637. Widest Vertical Area Between Two Points Containing No Points
//code in c+++
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int ans = 0;
        vector <int> xs;
        for(const vector<int>& point : points){
            const int x = point[0];
            xs.push_back(x);
        }
        ranges :: sort(xs);
        for(int i=1; i<xs.size();++i)
            ans = max(ans, xs[i]-xs[i-1]);
        return ans;
    }
};
