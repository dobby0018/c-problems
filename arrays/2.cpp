//check if array is sorted or not
#include<bits/stdc++.h>
using namespace std;
int checkSorted(int arr[],int n)
{
    for (int i = 0; i < n||i+1<n; i++)
    {
        if(arr[i]>=arr[i+1])
        
        return false;

    }
    return true;
    
}
// to remove duplicate elements from the list
int  removeDup(int arr[],int n)
{
    int  k=0;
    for (int  i = 1; i < n; i++)
    {
        if(arr[i]>arr[k])
        {arr[k+1]=arr[i];k++;}
        
        
    }return (k+1);
    
}
int main()
{
    int arr[]={1,1,4,11,16,42,131};
    int n=sizeof(arr)/4;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    // cout<<n;
    // if(checkSorted(arr,n))
    // cout<<"array sorted!!";
    // else
    // cout<<"array not sorted";
    n=removeDup(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}