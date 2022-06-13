#include<bits/stdc++.h>
using namespace std;
void Merge(int* arr,int start,int end)
{
    auto middle=(start+end)/2;
    int length1=middle-start+1;
    int length2=end-middle;
    int* first=new int[length1];
    int* second=new int[length2];
    int mainArrayIndex=start;
    for   (auto i=0;i<length1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=middle+1;
    for   (auto i=0;i<length2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }
    int index1=0,index2=0;
    mainArrayIndex=start;
    while   (index1<length1   &&   index2<length2)
    {
        if   (first[index1]<=second[index2])
        {
            arr[mainArrayIndex++]=first[index1++];
        }
        else 
        {
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while   (index1<length1)
    {
        arr[mainArrayIndex++]=first[index1++];
    }
    while   (index2<length2)
    {
        arr[mainArrayIndex++]=second[index2++];
    }
}
void Merge_Sort(int* arr,int start,int end)
{
    //base case/condition
    if   (start>=end)
    {
        return;
    }
    auto middle=(start+end)/2;
    Merge_Sort(arr,0,middle);
    Merge_Sort(arr,middle+1,end);
    Merge(arr,start,end);
}
int main   ()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements In The Array Before Sorting Is=[   ";
    for   (auto i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    Merge_Sort(arr,0,size-1);
    cout<<"Elements In The Array After Sorting Is=[   ";
    for   (auto i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    return 0;
    getchar();
}