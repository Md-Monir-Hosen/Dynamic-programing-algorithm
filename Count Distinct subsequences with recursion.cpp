#include<bits/stdc++.h>
using namespace std;
unordered_set<string>sn;
void subsequences(char s[],char op[],int i,int j)
{
    if(s[i]=='\0')
    {
      op[j]='\0';
      sn.insert(op);
      return ;
    }
    else
    {
        op[j]=s[i];
        subsequences(s,op,i+1,j+1);
        subsequences(s,op,i+1,j);
        return;
    }
}
int main()
{
     char str[] = "ggg";
    int m = sizeof(str) / sizeof(char);
    int n = pow(2, m) + 1;
    char op[m+1]; //extra one for having \0 at the end
    subsequences(str, op, 0, 0);
    cout << sn.size();
    sn.clear();
    return 0;
}
