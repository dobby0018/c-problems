#include<bits/stdc++.h>
using namespace std;
void largestSmallest(int arr[],int n)
{
    int largest=arr[0];
    int smallest=arr[0];
    int secondLargest=INT_MIN;
    int secondSmallest=INT_MAX;
    int m=0;
    int k=0;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>arr[m])
        {
            largest=arr[i];
            secondLargest=arr[m];
            m=i;
        }
        else {
            if(secondLargest<arr[i])
            secondLargest=arr[i];
        }
        if(arr[i]<arr[k])
        {
            smallest=arr[i];
            secondSmallest=arr[k];
            k=i;
        }
        else{
            if(secondSmallest>arr[i])
            secondSmallest=arr[i];
        }
        
    }
    cout<<"largest:"<<largest<<" secondLargest:"<<secondLargest<<endl;
    cout<<"smallest:"<<smallest<<" secondsmallest:"<<secondSmallest<<endl;
}
int main()
{
    int arr[]={311,4,1,6,42,31};
    int n=sizeof(arr)/4;
    // cout<<n;
    largestSmallest(arr,n);
}
