/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
//.................................................*..................................................
//day 30 of 100 day challenge 
//#geek for geek code of the day 
//grinding geek

    //code in c+++
class Solution{
    public:
    int help(int ind, int n,int total, vector<int> &cost,  vector<vector<int>> &dp){
        if(ind==n) return 0;
        if(dp[ind][total]!=-1) return dp[ind][total];
        if(total < cost[ind]){
            return dp[ind][total] = help(ind+1,n, total, cost,dp);
        }
        else{
            int leftAmount = total - cost[ind];
            int refund = cost[ind]*0.9;
            leftAmount += refund;
            
            int pick = 1 + help(ind+1,n, leftAmount, cost,dp);
            int notPick = help(ind+1,n, total, cost,dp);
            return dp[ind][total] = max(pick, notPick);
        }
    }
    int max_courses(int n, int total, vector<int> &cost)
    {
        vector<vector<int>> dp(n+1, vector<int>(total+1, -1));
        return help(0,n,total,cost, dp);
    }
};



//#leetcode code of the day 
//2225. Find Players With Zero or One Losses
//code in c+++
class Solution {
 public:
  vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    vector<vector<int>> ans(2);
    map<int, int> lossesCount;

    for (const vector<int>& m : matches) {
      const int winner = m[0];
      const int loser = m[1];
      if (!lossesCount.count(winner))
        lossesCount[winner] = 0;
      ++lossesCount[loser];
    }

    for (const auto& [player, nLosses] : lossesCount)
      if (nLosses < 2)
        ans[nLosses].push_back(player);

    return ans;
  }
};
