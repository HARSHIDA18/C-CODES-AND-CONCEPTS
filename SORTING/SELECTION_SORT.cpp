//BEST CASE=O(n^2)
//WORST CASE=O(n^2)
#include<bits/stdc++.h>
using namespace std;
void SELECTION_SORT(int* arr,int start,int end)
{
    //BASE CASE
    if   (start>=end)
        return;
    for   (int i=0;i<end;i++)
    {
        for   (int j=i+1;j<=end;j++)
            {
            if   (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
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
    int arr[]={10,9,8,7,6,5,4,3,2,1,};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements Before Sorting In The Array Is As Follows=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    SELECTION_SORT(arr,0,size-1);
    return 0;
    getchar();
}