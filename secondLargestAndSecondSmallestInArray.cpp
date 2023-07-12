#include <bits/stdc++.h>
using namespace std;
int findSecondSmallest(int arr[],int n)
{
  int small = INT_MAX;
  int second_small = INT_MAX;
  for(int i=0;i<n;i++)
  {
    if(arr[i]<small){
      second_small = small;
      small = arr[i];
    }
    else if(arr[i]<second_small && arr[i]!=small)
    {
      second_small = arr[i];
    }
    
  }
  return second_small;
}
int findSecondLargest(int arr[],int n)
{
  int largest = INT_MIN;
  int second_largest = INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(arr[i]>largest)
    {
      second_largest = largest;
      largest = arr[i];
    }
    else if(arr[i]>second_largest && arr[i]!=largest)
    {
      second_largest = arr[i];
    }
  }
  return second_largest;
}
int main() 
{
    int arr[]={3,1,5,7,4,36};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<findSecondSmallest(arr,n)<<endl;
    cout<<findSecondLargest(arr,n);
    return 0;
}
