#include<bits/stdc++.h>
using namespace std;
void Traversing(int* arr,int start,int end)
{
    //base case/condition
    if   (start>=end)
    {
        return;
    }
    else 
    {
        cout<<"Elements After Traversing In The Array Is As Follows=[   ";
        for   (auto i=start;i<=end;i++)
        {
            cout<<arr[i]<<"   ";
        }
        cout<<"]"<<endl;
    }
}
int main   ()
{
    int size;
    cout<<"Enter The Size Of The Array=";
    cin>>size;
    int arr[size];
    cout<<"Enter The Elements In The Array=";
    for   (auto i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Traversing(arr,0,size-1);
    return 0;
    getchar();
}