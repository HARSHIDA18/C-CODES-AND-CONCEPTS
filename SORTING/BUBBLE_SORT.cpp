//WORST CASE=O(n^2)
//BEST CASE=o(n)
#include<bits/stdc++.h>
using namespace std;
void BUBBLE_SORT(int* arr,int start,int size)
{
    //BASE CASE 
    if   (start>size)
        return;

    else 
    {
        int counter=1;
        while   (counter<=size)
        {
            for   (int i=0;i<size-counter;i++)
            {
                if   (arr[i]>arr[i+1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
            counter++;
        }
    }
    cout<<"Elements In The Sorted Array Is As Follows=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
}
int main   ()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements Before Sorting In The Array Is=[   ";
    for   (int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<"]"<<endl;
    BUBBLE_SORT(arr,0,size);
    return 0;
    getchar();
}