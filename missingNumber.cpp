#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int arr[]={1,2,3,4,6,7};
    int n = 7;
    int hash[n+1] ={0};
    for(int i=0;i<n-1;i++)
    {
      hash[arr[i]] = 1;
    }
    for(int i=1;i<=n;i++)
    {
      if(hash[i]==0)
      {
        cout<<i<<"";
      }
    }
    return 0;
}
