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
//day 16 of 100 day challenge 
//#geek for geek code of the day 31-12-2023
//New Year resolution
    //code in c+++
class Solution {
public:

    bool ans = 0;
    
    void solve(int coins[], int index, int sum, int &N, vector<vector<int>> &dp) {
        
        if(sum != 0 && (sum == 2024 || sum % 20 == 0 || sum % 24 == 0)) {
            ans = 1;
            return;
        }
        
        if(index >= N || sum > 2024) return;
        if(dp[index][sum] != -1) return;
        
        solve(coins, index + 1, sum, N, dp);
        solve(coins, index + 1, sum + coins[index], N, dp);
        
        dp[index][sum] = ans;
    }    
    
    
    int isPossible(int N , int coins[]) {
        
        int total = 0;
        for(int i = 0; i < N; i++) total += coins[i];
        
        vector<vector<int>> dp(N, vector<int> (total + 1, -1));
        solve(coins, 0, 0, N, dp);
    
        return ans;
    }
    
};

//#leetcode code of the day 31-12-2023
//1624. Largest Substring Between Two Equal Characters
//code in c+++
class Solution {
 public:
  int maxLengthBetweenEqualCharacters(string s) {
    int ans = -1;
    vector<int> lastSeen(26, -1);

    for (int i = 0; i < s.length(); ++i) {
      const int c = s[i] - 'a';
      if (lastSeen[c] == -1)
        lastSeen[c] = i;
      else
        ans = max(ans, i - lastSeen[c] - 1);
    }

    return ans;
  }
};
