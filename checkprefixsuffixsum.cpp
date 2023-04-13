#include <iostream>
using namespace std;

bool checkIsPartition(int arr[],int n)
{
  int total_sum = 0;
  for(int i=0;i<n;i++)
  {
    total_sum+=arr[i];
  }
  
  int prefix_sum = 0;
  for(int i=0;i<n;i++)
  {
    prefix_sum+=arr[i];
    
    int suffix_sum = total_sum - prefix_sum;
    if(prefix_sum == suffix_sum)
    {
      return true;
    }
    
  }

  return false;
  
}
int main() 
{
    int arr[] = {6,2,4,3,5};
    cout<<checkIsPartition(arr,5);
    return 0;
}
