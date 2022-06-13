#include<bits/stdc++.h>
using namespace std;
int LINEAR_SEARCH(int* arr,int start,int end)
{
    //BASE CASE/CONDITION
    if   (start>=end)
        return 0;
    
    int result;
    int element;
    cout<<"Enter The Element To Search=";
    cin>>element;
    for   (int i=0;i<=end;i++)
    {
        if   (arr[i]=element)
        {
            result=i;
        }
        else 
        {
            result=0;
        }
    }
    return result;
}
int main   ()
{
    int size;
    cout<<"Enter The Size Of The Array=";
    cin>>size;
    int arr[size];
    cout<<"Enter The Elements In The Array=   ";
    for   (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int result=LINEAR_SEARCH(arr,0,size-1);
    cout<<"The Index Position Of The Given Element Is="<<result;
    return 0;
    getchar();
}