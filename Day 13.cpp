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

//.................................................*..................................................
//day 13 of 100 day challenge 
//#geek for geek code of the day 28-12-2023
//Wildcard string matching
    //code in c+++
class Solution{
    public:
    bool match(string wild, string pattern)
    {
        int n = wild.size();
        int m = pattern.size();
        
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
        dp[n][m] = 1;
        
        for(int i = n - 1; i > -1; i--){
            for(int j = m - 1; j > -1; j--){
                if(wild[i] == '?')
                    dp[i][j] = dp[i + 1][j + 1];
                else if(wild[i] == '*'){
                    dp[i][j] = dp[i + 1][j + 1] or dp[i][j+1];
                }
                else{
                    if(wild[i] == pattern[j])
                    dp[i][j] = dp[i + 1][j + 1];
                    else
                    dp[i][j] = 0;
                }
            }
        }
        return dp[0][0];
    }
};

//#leetcode code of the day 27-12-2023
//1531. String Compression II
//code in c+++
class Solution {
 public:
  int getLengthOfOptimalCompression(string s, int k) {
    dp.resize(s.length(), vector<int>(k + 1, kMax));
    return compression(s, 0, k);
  }

 private:
  static constexpr int kMax = 101;
  vector<vector<int>> dp;

  int compression(const string& s, int i, int k) {
    if (k < 0)
      return kMax;
    if (i == s.length() || s.length() - i <= k)
      return 0;
    if (dp[i][k] != kMax)
      return dp[i][k];

    int maxFreq = 0;
    vector<int> count(128);
    for (int j = i; j < s.length(); ++j) {
      maxFreq = max(maxFreq, ++count[s[j]]);
      dp[i][k] = min(  
          dp[i][k],    
          getLength(maxFreq) +
              compression(s, j + 1, k - (j - i + 1 - maxFreq)));
    }

    return dp[i][k];
  }

  int getLength(int maxFreq) {
    if (maxFreq == 1)
      return 1;  
    if (maxFreq < 10)
      return 2; 
    if (maxFreq < 100)
      return 3;  
    return 4; 
  }
};
