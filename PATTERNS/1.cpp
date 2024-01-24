#include<iostream>
using namespace std;
void print(int n)
{
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}
// * 
// * * 
// * * * 
// * * * *
void print2(int n)
{
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
//* * * * *
// * * * *
// * * *
// * *
// *
void print3(int n)
{
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
    }
}
// 1
// 2 2
// 3 3 3
// 4 4 4 4
void print4(int n)
{
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

int main()
{
    int n;
    cin>>n;
    print4(n);
}