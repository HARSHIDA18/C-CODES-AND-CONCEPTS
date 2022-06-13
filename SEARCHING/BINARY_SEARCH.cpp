#include<bits/stdc++.h>
using namespace std;
void Binary_Search(int* arr,int start,int end)
{
    int element;
    cout<<"Enter The Element To Find=";
    cin>>element;
    while(start<=end)
    {
        int middle=(start+end)/2;
        if   (arr[middle]==element)
        {
            cout<<"The Element's Index Position Is="<<middle;
            break;
        }
        else if   (arr[middle]>element)
        {
            end=middle-1;
        }
        else 
        {
            start=middle+1;
        }
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
    Binary_Search(arr,0,size-1);
    return 0;
    getchar();
}
