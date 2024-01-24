#include<iostream>
using namespace std;
void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    }
    
}
//     *
//    ***
//   *****
//  *******
// *********
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*(n-i)-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    }
    
}

// *******
//  *****
//   ***
//    *

void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    }
    n=n-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2*(n-i)-1; k++)
        {
            cout<<"*";
        }
        cout<<endl;
        
        
    }
    
}
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *
int main()
{
    int n;
    cin>>n;
    print3(n);
}