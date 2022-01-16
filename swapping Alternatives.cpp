#include <iostream>
using namespace std;

void swapAlternatives(int arr[],int n)
{
    
    for(int i=0;i<n;i+=2)
    {
        if(arr[i+1]<=n)
        {
        swap(arr[i],arr[i+1]);
        }
        
    }
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[]={1,2,3,4,5,6};
    swapAlternatives(arr,6);
    printArray(arr,6);
    return 0;
}

