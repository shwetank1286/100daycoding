/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void) {counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter Id of your item"<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter Price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: displayPrice(void){
    for(int i=0; i<counter; i++)
    {
        cout<<"the price of item with Id"<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}



//.................................................*..................................................
//day8 of 100 day challenge 
//#geek for geek code of the day 23-12-2023
//Count More than n/k Occurences
    //code in c+++
class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int, int>mp;
        int ans=0;
        for(int i=0; i<n; i++){
            mp[arr[i]]++;
        }
        for(auto it : mp){
            if(it.second>n/k) ans++;
        }
        return ans;
    }
};

//#leetcode code of the day 23-12-2023
//1496. Path Crossing
//code in c+++
class Solution {
public:
    bool isPathCrossing(string path) {
        set <int> seen;
        seen.insert(0);
        int x=0;
        int y=0;
        for(const char c:path){
            switch(c){
                case 'N':
                ++y;
                break;
                case 'S':
                --y;
                break;
                case 'E':
                ++x;
                break;
                case 'W':
                --x;
                break;
            }
            const int key = x * 20001+y;
            if(seen.count(key))
                return true;
            seen.insert (key);
        }
        return false;
    }
};
