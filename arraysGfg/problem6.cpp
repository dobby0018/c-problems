#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void firstOccurence(int arr[],int n)
{
    unordered_map<int,int> freq;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if(freq[arr[i]]==1)
        {
            cout<<"element is"<< arr[i];
            
            return;
        }
    }
    
    
}
int main()
{
    int arr[]={1,2,4,11,12,2,1};
    
    int n=sizeof(arr)/4;
    firstOccurence(arr,n);
    
    // display(arr1,n);
    
}