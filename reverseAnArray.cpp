#include<iostream>
using namespace std;

void reverseArray(int arr[],int n)
{
    int start=0;
    int end = n-1;
    
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[6]={1,4,6,2,6,3};
    int brr[5]={1,5,6,9,8};
    reverseArray(arr,6);
    reverseArray(brr,5);
    
    printarray(arr,6);
    printarray(brr,5);
    return 0;
}
