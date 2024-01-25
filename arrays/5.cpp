#include<bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr1[]={1,4,11,11,16,42,42,131};
    int arr2[]={11,14,15,16,16,27,89};
    int n1=sizeof(arr1)/4;
    int n2=sizeof(arr2)/4;
    display(arr1,n1);
    
}