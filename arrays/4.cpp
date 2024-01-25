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
    int count=0;
    int k=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0)
        {
            arr[k]=arr[i];
            k++;
        }
        
        else
        count++;
    }
    for (int i = k; i < n; i++)
    {
        arr[i]=0;
    }
    
    
}
int main()
{
    int arr[]={1,40,11,16,0,131};
    int n=sizeof(arr)/4;
    zerosToEnd(arr,n);
    display(arr,n);
    
}