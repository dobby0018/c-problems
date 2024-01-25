#include<iostream>
using namespace std;
void func(int arr[])
{
    arr[1]=2;
    return;
}
int main()
{
    int n=3;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=9;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    func(arr);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}