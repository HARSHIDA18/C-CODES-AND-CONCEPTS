#include<bits/stdc++.h>
using namespace std;
void Deletion(int* arr,int start,int end)
{
    //base case/condition
    if   (start>=end)
    {
        return;
    }
    else 
    {
        int index;
        cout<<"Enter The Index Position From Where The Element Is To Be Deleted=";
        cin>>index;
        for   (auto i=index;i<=end;i++)
        {
            arr[i]=arr[i+1];
        }
        end--;
        cout<<"Elements After Deletion In The Array Is As Follows=[   ";
        for   (auto i=0;i<=end;i++)
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
    Deletion(arr,0,size-1);
    return 0;
    getchar();
}