/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//member friend function


class complex; //forward declaration
class calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }
    int sumRealComplex(complex, complex);
    int sumImgComplex(complex, complex);
};
class complex{
    int a, b;
    //individually declaring function as friend
    friend int calculator :: sumRealComplex(complex, complex); //friend function 
    friend int calculator :: sumImgComplex(complex, complex);
    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int calculator :: sumRealComplex(complex o1, complex o2)
{
    return(o1.a + o2.a);
}
int calculator :: sumImgComplex(complex o1, complex o2)
{
    return(o1.b + o2.b);
}
    
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 9);
    calculator calc; //cals is the an object
    int res = calc.sumRealComplex(o1, o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
    int resc = calc.sumImgComplex(o1, o2);
    cout<<"the sum of imaginary part of o1 and o2 is "<<resc<<endl;



//friend function as a class

class complex; //forward declaration
class calculator{
    public:
    int add(int a, int b){
        return (a + b);
    }
    int sumRealComplex(complex, complex);
    int sumImgComplex(complex, complex);
};
class complex{
    int a, b;
    //individually declaring function as friend
    // friend int calculator :: sumRealComplex(complex, complex); //friend function 
    // friend int calculator :: sumImgComplex(complex, complex);
    //aliter: declaring the entire calculator class as friend
    friend class calculator;
    public:
        void setNumber(int n1, int n2)
        {
            a = n1;
            b = n2;
        }
        void printNumber(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};
int calculator :: sumRealComplex(complex o1, complex o2)
{
    return(o1.a + o2.a);
}
int calculator :: sumImgComplex(complex o1, complex o2)
{
    return(o1.b + o2.b);
}
    
int main()
{
    complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 9);
    calculator calc; //cals is the an object
    int res = calc.sumRealComplex(o1, o2);
    cout<<"the sum of real part of o1 and o2 is "<<res<<endl;
    int resc = calc.sumImgComplex(o1, o2);
    cout<<"the sum of imaginary part of o1 and o2 is "<<resc<<endl;


//example of the member friend function
class shwetank;
class shweta{
    void objects(shwetank & obj);//mistake here we have to give it a class like private, public, protected
};                               //otherwise it will by default select it as a private 

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
    friend void shweta :: objects(shwetank&);   
};

void shweta :: objects(shwetank & obj)
{
    cout<<"the value of a is: "<<obj.a<<endl;
    cout<<"the value of b is: "<<obj.b<<endl;
}

int main(){
    shwetank object1;
    shweta object2;
    object2.objects(object1);

//corrected code of the above example 
class shwetank; // forward definition needed
// another class in which function is declared
class shweta {
public:
	void objects(shwetank & obj);
};

// base class for which friend is declared
class shwetank {
private:
	int a;

protected:
	int b;

public:
	shwetank()
	{
		a = 10;
		b = 99;
	}

	// friend function declaration
	friend void shweta::objects(shwetank&);
};

// friend function definition
void shweta::objects(shwetank & obj)
{
	cout << "value of a is " << obj.a<< endl;
	cout << "value of b is  " << obj.b;
}

// driver code
int main()
{
	shwetank object1;
	shweta object2;
	object2.objects(object1);

    return 0;
}
    
//.................................................*..................................................
//day 12 of 100 day challenge 
//#geek for geek code of the day 27-12-2023
//Anti Diagonal Traversal of Matrix
    //code in c+++
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        int n = matrix.size();
        vector<int> ans;
        for(int j = 0; j<n; j++){
            for(int x=0, y=j; y>-1 and x<n; x++, y--){
                ans.push_back(matrix[x][y]);
            }
        }
        for(int i = 1; i<n; i++){
            for(int y=n-1, x=i; y>-1 and x<n; x++, y--){
                ans.push_back(matrix[x][y]);
            }
        }
        return ans;
    }
};

//#leetcode code of the day 27-12-2023
//1578. Minimum Time to Make Rope Colorful
//code in c+++
class Solution {
 public:
  int minCost(string colors, vector<int>& neededTime) {
    int ans = 0;
    int maxNeededTime = neededTime[0];

    for (int i = 1; i < colors.length(); ++i)
      if (colors[i] == colors[i - 1]) {
        ans += min(maxNeededTime, neededTime[i]);
        // For each continuous group, Bob needs to remove every balloon except
        // the one with the maximum `neededTime`. So, he should hold the balloon
        // with the highest `neededTime` in his hand.
        maxNeededTime = max(maxNeededTime, neededTime[i]);
      } else {
        // If the current balloon is different from the previous one, discard
        // the balloon from the previous group and hold the new one in hand.
        maxNeededTime = neededTime[i];
      }

    return ans;
  }
};  
