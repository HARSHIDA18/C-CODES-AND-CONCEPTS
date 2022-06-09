//BEST CASE=O(n)
//WORST CASE=O(n^2)
#include<bits/stdc++.h>
using namespace std;
void INSERTION_SORT(int* arr,int start,int end)
{
    //BASE CASE/CONDITION 
    if   (start>=end)
        return;
    
    else
    {
        for   (int i=0;i<=end;i++)
        {
            int key=arr[i];
            int j=i-1;
            while   (j>=0   &&   key>arr[j])
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }
    cout<<"Elements After Sorting In The Array=[   ";
    for   (int i=0;i<=end;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
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
    INSERTION_SORT(arr,0,size-1);
    return 0;
    getchar();
}