#include<bits/stdc++.h>
using namespace std;
int Max(int a,int b)
{
    return (a>b) ? a: b;
}
int knapsack(int W,int wt[],int values[],int n)
{
    if(n==0||W==0)
    {
        return 0;
    }
    if(wt[n-1]>W)
    {
        return knapsack(W,wt,values,n-1);
    }
    else
    {
        return Max(values[n-1]+knapsack(W-wt[n-1],wt,values,n-1),knapsack(W,wt,values,n-1));
    }
}
int main()
{
     int profit[] = { 60, 100, 120 };
    int weight[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(profit) / sizeof(profit[0]);
    cout << knapsack(W, weight, profit, n);
    return 0;
}
