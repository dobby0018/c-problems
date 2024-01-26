//rotate right by n digits
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void rotateRight(int arr[],int n)
{
    int temp=arr[n-1];
    for (int  i = n-1; i >=0; i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    
}
void rotate2(int arr[],int n,int k)
{
    reverse(arr,arr+n-k);
    reverse(arr+n-k,arr+n);
    reverse(arr,arr+n);
}
int main()
{
    int arr[]={1,4,11,16,42,131};
    int n=sizeof(arr)/4;
    // for (int i = 0; i < 3; i++)
    // {
    //     rotateRight(arr,n);
    // }
    rotate2(arr,n,2);
    
    // rotateRight(arr,n);
    display(arr,n);
    
}