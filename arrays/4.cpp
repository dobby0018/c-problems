//put all the zero to the end;
#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void zerosToEnd(int arr[],int n)
{
    int k=0;
    while(arr[k]!=0)
    k++;
    int i=k+1;
    cout<<i;
    while(i<n)
    {
        
        if(arr[i]!=0)
        {
        arr[k]=arr[i];
        arr[i]=0;
        while(arr[k]!=0)
        k++;
        }
        i=k+1;

    }
    
    
    
}
int main()
{
    int arr[]={1,40,11,16,0,131};
    int n=sizeof(arr)/4;
    zerosToEnd(arr,n);
    display(arr,n);
    
}