/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//.................................................*..................................................
//day 27 of 100 day challenge 
//#geek for geek code of the day 
//Reverse First K elements of Queue

    //code in c+++
       class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
                stack<int> st;
        queue<int> ans;
        
        
       for(int i=0;i<k;i++)
       {
           st.push(q.front());
           q.pop();
       }
       while(!st.empty())
       {
           
               ans.push(st.top());
               st.pop();
       }
       while(!q.empty())
       {
           ans.push(q.front());
           q.pop();
       }
       return ans;
    }
};

//#leetcode code of the day 
//1704. Determine if String Halves Are Alike
//code in c+++
bool halvesAreAlike(string s){
    const string a = s.substr(0, s.length() / 2);
    const string b = s.substr(s.length() / 2);
    const int aVowelsCount = 
        range :: count_if(a, [=](char c) { return isVowel(c); });
    const int bVowelsCount =
        ranges :: count_if\(b, [=](char c) { return isVowel(c); });
    return aVowelsCount == bVowelsCount;
}
private:
    bool isVowel(char c) {
        static constexpr string_view kVowels = "aiuAEOU";
        return kVowels.find(c) != string_view::npos;
    }
};