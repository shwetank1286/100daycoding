/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
//static data function

class Employee{
    int id;

    public:
        void setData(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"the id of this employee is "<<id<<" and this is Employee number "<<count<<endl;
        }
};

int Employee ::count;

int main()
{
    Employee shwetank, shweta, beauty;
    shwetank.setData();
    shwetank.getData();
    
    shweta.setData();
    shweta.getData();
    
    beauty.setData();
    beauty.getData();
    
//static member function
class Employee{
    int id;
    static int count;
    // int count;
    public:
        void setData(void){
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            cout<<"the id of this employee is "<<id<<" and this is Employee number "<<count<<endl;
        }
        static void getCount(void){
            cout<<"the value of count is "<<count<<endl;

};

int Employee ::count;

int main()
{
    Employee shwetank, shweta, beauty;
    shwetank.setData();
    shwetank.getData();
    shwetank.getCount();
    
    shweta.setData();
    shweta.getData();
    shweta.getCount();
    
    beauty.setData();
    beauty.getData();
    beauty.getCount();


    return 0;
}

//.................................................*..................................................
//day9 of 100 day challenge 
//#geek for geek code of the day 24-12-2023
//Buy Maximum Stocks if i stocks can be bought on i-th day
    //code in c+++
class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        //Write your code here
        vector<pair<int, int>>temp;
        for(int i=0; i<n; i++){
            temp.push_back({price[i],1+i});
        }
        sort(temp.begin(), temp.end());
        int cnt=0;
        for(int i=0; i<n; i++){
            if(temp[i].first<=k){
                int x=(k)/(temp[i].first);
                int bought=min(temp[i].second, x);
                k-=bought*temp[i].first;
                cnt+=bought;
            }else break;
        }
        return cnt;
    }
};

//#leetcode code of the day 24-12-2023
//1758. Minimum Changes To Make Alternating Binary String
//code in c+++
class Solution {
public:
    int minOperations(string s) {
        int cost10;
        for(int i=0; i<s.length();++i)
            if(s[i]-'0' == i%2)
                ++ cost10;
        const int cost01=s.length()-cost10;
        return min(cost10,cost01);
    }
};
