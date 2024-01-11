//.................................................*..................................................
//day 26 of 100 day challenge 
//#geek for geek code of the day 
//Remove K Digits
    //code in c+++
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    string removeKdigits(string s, int k) {
         deque<char>dq;
         int n=s.length();
         for(int i=0;i<n;i++){
            while(!dq.empty()&& dq.back()>s[i] && k>0){
                if(dq.back()!='0')
                k--;
                dq.pop_back();
            }
            dq.push_back(s[i]);
            
            
         }
        while(k-- && !dq.empty()){
            dq.pop_back();
        }
        while(!dq.empty() &&  dq.front()=='0')dq.pop_front();
        if(dq.size()==0) return "0";
         string ans;
         for(auto &x:dq){
             ans.push_back(x);
         }
         return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

//#leetcode code of the day 
// 1026. Maximum Difference Between Node and Ancestor
//code in c+++
class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
        int ans = 0;
        const int inf = 1e6;
        function<pair<int, int>(TreeNode*)>dfs=[&](TreeNode * node) -> pair<int, int>{
        if(!node)
            return{inf, -inf};
        pair<int, int> left = dfs(node -> left);
        pair<int, int> right = dfs(node -> right);
    
        int MIN = min(left.first, right.first);
        int MAX = max(left.second, right.second);
    
        if(node -> left or node -> right)
            ans = max({ans, abs(MIN - node -> val), abs(MAX - node -> val)});
            return{min(MIN, node -> val), max(MAX, node -> val)};
        };
    dfs(root);
    return ans;
    }
};