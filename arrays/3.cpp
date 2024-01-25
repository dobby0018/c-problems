//check if array is sorted or not
#include<bits/stdc++.h>
using namespace std;
void rotateLeft(int arr[],int n,int x)
{
    for (int j = 0;j < x; j++)
    {
        int k=arr[0];
    for (int i = 0; i < n; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=k;
    }
    
    

    
}
int main()
{
    int arr[]={1,4,11,16,42,131};
    int n=sizeof(arr)/4;
    rotateLeft(arr,n,3);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}