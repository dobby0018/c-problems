#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> myvector={1,2,3,4,5};
    myvector.push_back(6);
    vector<int>::iterator it;
    for(it=myvector.begin();it<myvector.end();it++)
    {
        cout<<*it<<endl;
    }
    

}