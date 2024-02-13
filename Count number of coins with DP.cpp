#include<bits/stdc++.h>
using namespace std;
int Count(vector<int>& coins,int n,int sum,vector<vector<int>>& dp)
{
    if(sum==0)
    {
        return dp[n][sum]=1;
    }
    if(n==0||sum<0)
    {
        return 0;
    }
    if(dp[n][sum]!=-1)
    {
        return dp[n][sum];
    }
   return Count(coins,n,sum-coins[n-1],dp)+Count(coins,n-1,sum,dp);
}
int32_t main()
{
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        int n, sum;
        n = 3, sum = 5;
        vector<int> coins = { 1, 2, 3 };
        // 2d dp array to store previously calculated
        // results
        vector<vector<int> > dp(n + 1,
                                vector<int>(sum + 1, -1));
        int res = Count(coins, n, sum, dp);
        cout << res << endl;
    }
}
