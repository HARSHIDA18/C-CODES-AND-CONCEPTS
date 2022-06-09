#include<bits/stdc++.h>
using namespace std;
void MERGE_SORT1(int* arr,int start,int end)
{
    int middle=(start+end)/2;
    int length1=middle-start+1;
    int length2=end-middle;
    //DYNAMIC PROGRAMMING
    int* first=new int[length1];
    int* second=new int[length2];
    int mainArrayIndex=start;
    for   (int i=0;i<length1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }
    mainArrayIndex=middle;
    for   (int i=0;i<length2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }
    int index1=0,index2=0;
    mainArrayIndex=start;
    while   (index1<length1   &&   index2<length2)
    {
        if   (first[index1]<second[length2])
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
void MERGE_SORT(int* arr,int start,int end)
{
    //BASE CASE/CONDITION 
    if   (start>=end)
        return;
    
    int middle=(start+end)/2;
    MERGE_SORT1(arr,0,middle);
    MERGE_SORT1(arr,middle+1,end);
}
int main   ()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements Before Sorting In The Array=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    MERGE_SORT(arr,0,size-1);
    cout<<"Elements After Sorting In The Array=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    return 0;
    getchar();
}