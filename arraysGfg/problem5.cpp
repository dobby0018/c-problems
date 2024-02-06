#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
//first occurence of repeating elements
void firstOccurence(int arr[],int n)
{
    int min=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<"the element is "<<arr[i]<<endl;
                return;
            }
            
        }
        
    }
    
}
void firstOccurence2(int arr[],int n)
{
    unordered_map<int,int> freq;
    int min=0;
    for (int i = n-1; i >=0; i--)
    {
        if(freq[arr[i]])
        {min=arr[i];}
        else{
            freq[arr[i]]=1;
        }
    }
    cout<<min;

}
//this finds the first occurence of the repeated element
int main()
{
    int arr[]={1,2,4,11,12,2,1};
    
    int n=sizeof(arr)/4;
    firstOccurence2(arr,n);
    
    // display(arr1,n);
    
}