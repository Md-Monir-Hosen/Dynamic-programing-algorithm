#include<bits/stdc++.h>
using namespace std;
int countWays(int n,int dp[])
{
    if(n<=1)
    {
        dp[n]=1;
    }
    if(dp[n]!=-1)
    {
        dp[n];
    }
    dp[n]=countWays(n-1,dp)+countWays(n-2,dp);
    return dp[n];
}
int main()
{
     int n = 4;
    int dp[n + 1];
    memset(dp, -1, sizeof dp);
    cout << "Number of ways = " << countWays(n, dp);
    return 0;
}
