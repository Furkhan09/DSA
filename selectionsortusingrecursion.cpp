#include <bits/stdc++.h>

using namespace std;

void selectionSort(int *arr,int beginIndex,int size)
{
    //base case
    if(beginIndex >= size-1)
    {
        return;
    }
    
    int minIndex = beginIndex;
    for(int i=beginIndex;i<size;i++)
    {
        if(arr[i]<arr[minIndex])
        {
            minIndex = i;
        }
    }
    swap(arr[minIndex],arr[beginIndex]);
    //recursive call
    selectionSort(arr,beginIndex+1,size);
    
}

int main()
{
    int arr[]= {9,6,1,34,5,66,21};
    selectionSort(arr,0,7);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
