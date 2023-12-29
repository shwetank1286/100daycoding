/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//constructors and distructors
class complex{
    int a, b;
    public:
    //creating a constructor
    //construsctor is a special memeber fuction with the same name as of the class.
    //it is used to initialize the object of its class
    //it is automatically involved whenever an object is created
    
    complex(void);
    
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(void){ //this is the defaul constructor
                          //as it takes no parameters
    a=10;
    b=0;
}

int main()
{
    complex c;
    c.printNumber();


//distructors
//Destructor is an instance member function that is 
//invoked automatically whenever an object is going to be destroyed.
class complex{
    int a, b;
public:
    
    complex(void);
    
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(void)
{
    a = 0;
    b = 0;
}

int main(){
    complex a;
    a.printNumber();
  
//paramaterized function
class complex{
    int a, b;
public:
    
    complex(int, int);
    
    void printNumber(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(int x, int y)
{
    a = x;
    b = y;
}

int main(){
    //implicit call
    complex a(4, 6);
    //explicit call
    complex b= complex(5, 7);
    
    a.printNumber();
    b.printNumber();


    return 0;
}

//.................................................*..................................................
//day 14 of 100 day challenge 
//#geek for geek code of the day 29-12-2023
//Check if a string is repetition of its substring of k-length
    //code in c+++
class Solution{
public:
	
	int kSubstrConcat (int n, string s, int k)
	{
	    if(n%k)
	        return 0;
	       
	    map<vector<int>,int> substr;
	    
	    vector<int> f(26, 0);
	    
	    for(int i = 0; i < n; i += k){
	        for(int j = i - k; j < i and j > -1; j++ )
	            --f[s[j] - 'a'];
	        for(int j = i; j < i +k; j++)
	            ++f[s[j] - 'a'];
	           
	        substr[f]++;
	        
	        if(substr.size() > 2)
	            return 0;
	    }
	    
	    int freq = (*substr.begin()).second;
	    
	    return (freq == 1 or freq >= n/k -1);
	}

};

//#leetcode code of the day 29-12-2023
//1335. Minimum Difficulty of a Job Schedule
//code in c+++
class Solution {
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        const int inf = 1e5;
        vector<vector<int>>dp(n+1,vector<int>(d+1,inf));
        dp[n][d]=0;
        
        for(int i = n - 1; i > -1; i--){
            for(int j = d - 1; j > -1; j--){
                int MAX = 0;

                for(int k = i; k < n; k++){
                    MAX = max(MAX, jobDifficulty[k]);

                    dp[i][j] = min(dp[i][j], MAX + dp[k + 1][j + 1]);
                }
            }
        }
        return dp[0][0] >= inf ? -1 : dp[0][0];
    }
};
