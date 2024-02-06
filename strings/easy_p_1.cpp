#include<bits/stdc++.h>
using namespace std;
void stringReverse_1(string str)
{
    reverse(str.begin(),str.end());
    cout<<str<<endl;
}
void stringReverse_2(string str)
{
    int left=0;
    int right=str.length()-1;
    while(left<right)
    {
        swap(str[left],str[right]);
        left++;
        right--;
    }
    cout<<str<<endl;
}
void stringReverse_3(string str)
{
    string rev;
    int n=str.length()-1;
    for (int i = n; i>=0; i--)
    {
        rev+=str[i];
    }
    cout<<rev;
}
int main()
{
    string str="hello world|||";
    stringReverse_1(str);
    stringReverse_2(str);
    stringReverse_3(str);
}