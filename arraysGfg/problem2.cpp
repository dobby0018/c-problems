//find the missing interger

#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int missing(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=i+1)
        return i+1;
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,8};
    int n=sizeof(arr)/4;
    cout<<"missing interger: "<<missing(arr,n)<<endl;
    
    display(arr,n);
    
}