#include<bits/stdc++.h>
using namespace std;
void prefixSum(int a[3][3],int n)
{
  for(int j=0;j<n;j++)
  {
      for(int i=1;i<n;i++)
      {
          a[i][j]+=a[i-1][j];
      }
  }
   for(int i=0;i<n;i++)
  {
      for(int j=1;j<n;j++)
      {
          a[i][j]+=a[i][j-1];
      }
  }
}
void print(int a[3][3],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << setw(3) << left << a[i][j] << " ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n = 3;
    int arr[3][3] = {{10,20,30},
                     {5, 10, 20},
                     {2, 4, 6}
                    };
    prefixSum(arr, n);
      print(arr, n);
}
