#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int countPairs(int arr[],int n,int sum)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==sum)
            count++;
        }
        
    }
    return count;
    
}
int countPairs2(int arr[],int n,int sum)
{
    int count=0;
    int i=0;
    int j=n-1;
    sort(arr,arr+n);
    while(i<j)
    {
        cout<<arr[i]<<" "<<arr[j]<<count<<endl;
        if((arr[i]+arr[j])==sum)
        {count++;
        
        j--;}
        else if((arr[i]+arr[j])>sum)
        {
            j--;
        }
        else{
            i++;
        }
        
    }
    return count;
}
int main()
{
    int arr[]={3,1,6,42,8,8};
    int n=sizeof(arr)/4;
    cout<<"the count pairs are: "<<countPairs2(arr,n,9);
    display(arr,n);
    
}