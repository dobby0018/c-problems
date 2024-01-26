#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
void common(int arr1[],int n1,int arr2[],int n2,int arr3[],int n3)
{
    int count=0;
    int i=0;
    int j=0;
    int k=0;
    while(i<n1)
    {
        while(j<n2)
        {
            cout<<i<<" "<<j<<" "<<arr1[i]<<" "<<arr2[j]<<endl;
            if(arr1[i]<arr2[j])
            {i++;}
            else if(arr1[i]>arr2[j])
            {j++;}
            else
            {
                while(k<n3)
                {
                    
                    if(arr3[k]<arr1[i])
                    {k++;}
                    else if(arr3[k]>arr1[i])
                    break;
                    else
                    {count++;break;}
                }
                
            }
        }
        
    }
    cout<<"common: "<<count;
    
}
int main()
{
    int arr1[]={1,2,4,11,16,42,131};
    int arr2[]={2,4,12,34,45,56};
    int arr3[]={1,2,3,4,5,6,7};
    int n1=sizeof(arr1)/4;
    int n2=sizeof(arr2)/4;
    int n3=sizeof(arr3)/4;
    common(arr1,n1,arr2,n2,arr3,n3);
    // display(arr1,n);
    
}