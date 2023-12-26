/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
    
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
    
    return 0;
}

//.................................................*..................................................
//day 11 of 100 day challenge 
//#geek for geek code of the day 26-12-2023
//Largest rectangular sub-matrix whose sum is 0
    //code in c+++
class Solution{
  public:
  vector<vector<int>> sumZeroMatrix(vector<vector<int>> a){
      //Code Here
      int n=a.size();
      int m=a[0].size();
      vector<vector<int>> prefix(n+1,vector<int> (m+1,0));
      pair<int,int> ans1={-1,-1},ans2;
      int val=-1;
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            prefix[i+1][j+1]=prefix[i+1][j]+prefix[i][j+1]+a[i][j]-prefix[i][j];
            if(prefix[i+1][j+1]==0&&val==-1){
                ans2={i+1,j+1};
                ans1={0,0};
                val=(i+1)*(j+1);
            }
            if(prefix[i+1][j+1]==0&&val<((i+1)*(j+1))){
                ans2={i+1,j+1};
                ans1={0,0};
                val=(i+1)*(j+1);
            }
        }   
      }
      for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
              for(int k=0;k<=i;k++){
                for(int z=0;z<=j;z++){
                    if(k==i&&z==j) continue;
                    int ne= prefix[i][j]-prefix[i][z]-prefix[k][j]+ prefix[k][z];
                    
                    if(ne==0){
                        int l=j-z;
                        int b=i-k;
                        if(k+1>i||z+1>j)
                        continue;
                        if(l*b>val){
                            ans1={k,z};
                            ans2={i,j};
                            val=l*b;
                        }
                        if(l*b==val){
                            if(ans1.second==z){
                                if((ans2.first-ans1.first)<(i-(k))){
                                     ans1={k,z};
                                     ans2={i,j};
                                     val=l*b;
                                }
                            }
                            else{
                                if(ans1.second>z){
                                     ans1={k,z};
                                     ans2={i,j};
                                     val=l*b;
                                }
                            }
                        }
                    }
                }
              }
          }
      }
      vector<vector<int>> ans;
     for(int i=ans1.first;i<ans2.first;i++){
          vector<int> temp;
          for(int j=ans1.second;j<ans2.second;j++){
              temp.push_back(a[i][j]);
          }
          ans.push_back(temp);
      }
      return ans;
  }
};

//#leetcode code of the day 26-12-2023
//1155. Number of Dice Rolls With Target Sum
//code in c+++
class Solution {
public:
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>> dp(n + 1, vector<int> (k * n + 1, 0));

        if(target > k * n)
            return 0;
        dp[n][target] = 1;

        const int mod = 1e9 + 7;

        for(int i = n-1; i>-1;i--){
            for(int j=0; j<k*i+1; j++){
                for(int z = 1; z<k+1; z++){
                    dp[i][j]=(dp[i][j] + dp[i+1][j+z]) % mod;
                }
            }
        }
        return dp[0][0];
    }
};
