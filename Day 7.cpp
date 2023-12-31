/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;
//OOPs concept read function, check binary, ones compliment displaying the numbers


class shwetank
{
    string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void shwetank :: read(void){
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}
void shwetank :: chk_bin(void){
    for (int i = 0; i < s.length(); i++) 
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Inccorect binary"<<endl;
            exit(0);
        }
    }
}

void shwetank :: ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void shwetank :: display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++) {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    shwetank b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();

//nesting of member function in c++ on the same above Code
class shwetank
{
private:
    string s;
    void chk_bin(void);
public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};
void shwetank :: read(void){
    cout<<"Enter the binary number"<<endl;
    cin>>s;
}
void shwetank :: chk_bin(void){
    for (int i = 0; i < s.length(); i++) 
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Inccorect binary"<<endl;
            exit(0);
        }
    }
}

void shwetank :: ones_compliment(void)
{
    chk_bin(); //nesting function 
    //A member function can be called by using its name inside 
    //another member function of the same class. This is known as nesting of member functions.
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void shwetank :: display(void)
{
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++) {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
    shwetank b;
    b.read();
    // b.chk_bin();
    b.ones_compliment();
    b.display();

    return 0;
}

//.................................................*..................................................
//day7 of 100 day challenge 
//#geek for geek code of the day 22-12-2023
//maximum meeting in one room 
    //code in c+++
class Solution{
public:
    vector<int> maxMeetings(int N,vector<int> &S,vector<int> &F){
        vector<pair<pair<int,int>,int>>temp;
         for(int i=0; i<N; i++){
            temp.push_back({{F[i], S[i]}, i+1});
        }
        sort(temp.begin(),temp.end());
        vector<int>ans;
        ans.push_back(temp[0].second);
        int finalTime = temp[0].first.first;
        for(int i=1; i<N; i++){
            if(temp[i].first.second>finalTime)
            {
                ans.push_back(temp[i].second);
                finalTime = temp[i].first.first;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//#leetcode code of the day 22-12-2023
//1422. Maximum Score After Splitting a String
//code in c+++
class Solution {
public:
    int maxScore(string s) {
            int ans  = 0;
            int zeros = 0;
            int ones = ranges :: count(s, '1');
            for (int i=0; i+1<s.size();++i){
                if (s[i] == '0')
                ++zeros;
                else
                --ones;
                ans = max (ans, zeros + ones);
            
            }
            return ans;
    }

};



