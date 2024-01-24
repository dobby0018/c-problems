#include<iostream>
using namespace std;
void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            if((i+j)%2==0)
            cout<<"1";
            else
            cout<<"0";
        }
        cout<<endl;
    }
    
}
// 1
// 01
// 101
// 0101
int main()
{
    int n;
    cin>>n;
    print(n);
}