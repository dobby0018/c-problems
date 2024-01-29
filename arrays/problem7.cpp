#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void largesSubArray(int arr[],int n,int target)
{
    int i=0;
    int j=0;
    int sum=arr[i];
    int max=0;
    while(i<n&&j<n)
    {
        cout<<sum<<endl;
        if(sum<target)
        {
            j++;
            sum+=arr[j];
        }
        else if(sum>target)
        {
            sum-=arr[i];
            i++;
        }
        else
        {
            cout<<i<<" "<<j<<endl;
            max=j-i+1;

            j++;
            sum+=arr[j];
        }
    }
    if(max==0)
    cout<<"no subarray!!!"<<endl;
    else{
        cout<<"the length of maximum length subarray: "<<max<<endl;
    }
}
void subArray(int arr[],int n,int target)
{
    int i=0;
    int j=0;
    int sum=arr[i];
    
    while(i<n&&j<n)
    {
        if(sum<target)
        {
            j++;
            sum+=arr[j];
        }
        else if(sum>target)
        {
            sum-=arr[i];
            i++;
        }
        else
        {
            cout<<"the subarray from "<<i<<" to "<<j<<endl;
            return;
        }
    }
    cout<<"no subarray!!!"<<endl;
}
int main()
{
    int arr[]={1,4,11,1,3,1,1,1,1,1,1,1};
    int n=sizeof(arr)/4;
    largesSubArray(arr,n,5);
    display(arr,n);
    
}