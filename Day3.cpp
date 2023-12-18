/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{

    
//break and continue in for loop 
    for(int i=0;i<40;i++)
    {
        
        if (i==2){
            continue;
        }
        else if(i==5){
            break;
        }cout<<i<<endl;
    }

//break and continue in while loop

    int i=0;
    while(i<40){
        
        i++;
        if (i==2){
            continue;
        }
        else if (i==7){
            continue;
        }
        else if(i==9){
            break;
        }cout<<i<<endl;
    }
    
//break and continue in do-while loop
    int i=0;
    do{
        
        i++;
        if (i==2){
            continue;
        }
        else if (i==7){
            continue;
        }
        else if(i==9){
            break;
        }cout<<i<<endl;
    }while(i<40);
    
//pointers
    int a=3;
    int *b=&a;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;
//pointers to pointers
    int **c=&b;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    
//array

    int marks[]={32,24,25,26};
    
    int mathsmarks[4];
    
    mathsmarks[0]=199;
    mathsmarks[1]=189;
    mathsmarks[2]=179;
    mathsmarks[3]=198;
    
    cout<<"these are maths marks"<<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;
    
    cout<<"these are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    
    marks[2]=98;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
//array using for loop 
    
    int marks[]={32,24,25,26};
    marks[2]=27;
    for (int i = 0; i < 4; i++) {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }
    
//array using for loop 

    int marks[]={32,24,25,26};
    marks[2]=27;
    int i=0;
    while(i<4){
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }
    
//array using for loop 
    int marks[]={32,24,25,26};
    marks[2]=27;
    int i=0;
    do{
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
        i++;
    }while(i<4);
    
//array using pointers
    int marks[]={32,24,25,26};
    int *p=marks;
    cout<<"the value of *(p) is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    
//array using pointers 
    int marks[]={32,24,25,26};
    int *p=marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;

//.............................................................*.............................................................
//#geek for geek code of the day 18-12-2023
//day3 of 100 day challenge 
    //code in c+++
class Solution {
  public:
    int gameOfXor(int N , int A[]) {
        int ans=0;
        int len=N;
        for(int i=0;i<N;i++){
            int left=i+1;
            int right =(N-i);
            len=left*right;
            if(len & 1){
                ans=(ans^A[i]);
            }
        }
        return ans;
        
    }
};
//#leetcode code of the day 18-12-2023
//1913. Maximum Product Difference Between Two Pairs
//code in c+++
class Solution {
 public:
  int maxProductDifference(vector<int>& nums) {
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int min1 = INT_MAX;
    int min2 = INT_MAX;

    for(const int num : nums){
        if(num > max1){
            max2 = max1;
            max1 = num;
        }
        else if(num > max2){
            max2 = num;
        }
        if(num < min1){
            min2=min1;
            min1 = num;
        }
        else if(num < min2){
            min2 = num;
        }
    }
    return max1*max2-min1*min2;
  }
};
