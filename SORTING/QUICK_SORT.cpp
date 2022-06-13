#include<bits/stdc++.h>
using namespace std;
int partition(int* arr,int start,int end)
{
    int pivot=arr[start];
    int count=0;
    for   (auto i=start+1;i<=end;i++)
    {
        if   (arr[i]<pivot)
        {
            count++;
        }
    }
    int pivotIndex=start+count;
    swap(arr[start],arr[pivotIndex]);
    int i=start,j=end;
    while   (i<pivotIndex   &&  pivotIndex<j)
    {
        while   (arr[i]<arr[j])
        {
            i++;
        }
        while   (arr[i]>arr[j])
        {
            j--;
        }
        if   (i<pivotIndex   &&   pivotIndex<j)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void Quick_Sort(int* arr,int start,int end)
{
    //base case/condition
    if   (start>=end)
    {
        return;
    }
    int p=partition(arr,start,end);
    Quick_Sort(arr,0,p-1);
    Quick_Sort(arr,p+1,end);
}
int main   ()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements Before Sorting In The Array Is As Follows=[   ";
    for   (auto i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    Quick_Sort(arr,0,size-1);
    cout<<"Elements After Sorting In The Array Is As Follows=[    ";
    for   (auto i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    return 0;
    getchar();
}