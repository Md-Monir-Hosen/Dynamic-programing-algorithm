#include<bits/stdc++.h>
using namespace std;
int Count(int coins[],int n,int sum)
{
    if(sum==0)
    {
        return 1;
    }
    if(sum<0)
    {
        return 1;
    }
    if(n<=0)
    {
        return 0;
    }
    return Count(coins,n,sum-coins[n-1])+Count(coins,n-1,sum);
}
int main()
{
  int i, j;
    int coins[] = { 1, 2, 3 };
    int n = sizeof(coins) / sizeof(coins[0]);
    int sum = 5;

    cout << " " << Count(coins, n, sum);

    return 0;
}
