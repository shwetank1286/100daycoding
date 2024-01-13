/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

//.................................................*..................................................
//day 28 of 100 day challenge 
//#geek for geek code of the day 
//Insertion Sort for Singly Linked List

    //code in c+++
class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
         vector<int> ans;
        Node *temp = head_ref;
        while(temp != NULL){
            ans.push_back(temp -> data);
            temp = temp -> next;
        }

        sort(ans.begin(), ans.end());
        temp = head_ref;
        for(int i = 0; i < ans.size(); i++){
            temp -> data = ans[i];
            temp = temp -> next;
        }

        return head_ref;
    }
    
};

//#leetcode code of the day 
//1347. Minimum Number of Steps to Make Two Strings Anagram
//code in c+++
class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> f(26, 0);
        for(auto i:s)
            ++f[i - 'a'];
        for(auto i:t)
            --f[i - 'a'];
        int ans = 0;
        for(int i=0; i<26; i++){
            ans += abs(f[i]);
        }
        return ans>>1;
    }
};
