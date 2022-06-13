#include<bits/stdc++.h>
using namespace std;
void Insertion(int* arr,int start,int end)
{
    //base case/condition
    if   (start>=end)
    {
        return;
    }
    else 
    {
        int index,element;
        cout<<"Enter The Index Position Where The Element Is To be Inserted=";
        cin>>index;
        cout<<"Enter The Element Which Is To Be Inserted=";
        cin>>element;
        for   (int i=end;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        end++;
        cout<<"Elements After Insertion In The Array Is As Follows=[   ";
        for   (int i=start;i<end;i++)
        {
            cout<<arr[i]<<"   ";
        }
        cout<<"]"<<endl;
    }
}
int main   ()
{
    int size;
    cout<<"Enter the Size Of The Array=";
    cin>>size;
    int arr[size];
    cout<<"Enter The Elements In The Array=";
    for   (auto i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    Insertion(arr,0,size);
    return 0;
    getchar();
}