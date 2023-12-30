/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

//prameterised consytructors
//point constructor continue

class point{
    int x, y;
    public:
        point(int a, int b){
            x = a;
            y = b;
        }
        void displaypoint(){
            cout<<"the point is "<<"("<<x<<","<<y<<")"<<endl;
        }
        
};

int main()
{
    point p(1,1);
    p.displaypoint();
    point q(2,2);
    q.displaypoint();

//example of pareameterised constructor 
//create a function (hint: make it as a friend) which take twop point object and computes
//the distance between 2 points

#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x ,y ;
    friend void distance(point o1 ,point o2 );
    public:
    point (int a ,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};
void distance(point o1 ,point o2){
    float dist;
dist=sqrt(pow(o2.x-o1.x ,2)+pow(o2.y-o1.y ,2));
cout<<dist<<endl;
}
int main()
{
   point p(1,1);
   p.display();
   point q(2,2);
   q.display(); 
   distance(p,q);

    return 0;
}

//.................................................*..................................................
//day 15 of 100 day challenge 
//#geek for geek code of the day 30-12-2023
//Winner of an election
    //code in c+++
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        map<string,int> track;
    for(int i{0}; i < n; i++){
         track[arr[i]]++;
    }
    
    string name = "";
    int max{0};
    for(auto pair : track){
        if(pair.second > max || (pair.second == max && pair.first < name)){
            max = pair.second;
            name = pair.first;
        }
    }
    return {name, to_string(max)};
    }
};

//#leetcode code of the day 30-12-2023
//1897. Redistribute Characters to Make All Strings Equal
//code in c+++
class Solution {
 public:
  bool makeEqual(vector<string>& words) {
    vector<int> count(26);

    for (const string& word : words)
      for (const char c : word)
        ++count[c - 'a'];

    return ranges::all_of(count,
                          [&](const int c) { return c % words.size() == 0; });
  }
};
