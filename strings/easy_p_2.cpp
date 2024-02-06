#include<bits/stdc++.h>
using namespace std;
void romanToInt(string str)
{
    unordered_map<char,int> romanMap={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}

    };
    int result=0;
    int prevValue=0;
    for (int i = str.length()-1; i >=0 ; i--)
    {
        int curValue=romanMap[str[i]];
        if(curValue<prevValue)
        {
            result-=curValue;

        }
        else{
            result+=curValue;
        }
        prevValue=curValue;
    }
    cout<<result;
    
}
void intToRoman(int val)
{
    int value=val;
    string str;
    while(value>0)
    {
        cout<<value<<endl;
        if(value>1000)
        {
            value-=1000;
            str+="M";
        }
        else if(value>900)
        {
            value-=900;
            str+="CM";
        }
        else if(value>500)
        {
            value-=500;
            str+="D";
        }
        else if(value>100)
        {
            value-=100;
            str+="C";
        }
        else if(value>90)
        {
            value-=90;
            str+="XC";
        }
        else if(value>50)
        {
            value-=50;
            str+="L";
        }
        else if(value>40)
        {
            value-=40;
            str+="XL";
        }
        else if(value>10)
        {
            value-=10;
            str+="X";
        }
        else if(value==9)
        {
            value-=9;
            str+="IX";
        }
        else if(value>5)
        {
            value-=5;
            str+="V";
        }
        else if(value==4)
        {
            value-=4;
            str+="IV";
        }
        else{
            value-=1;
            str+="I";
        }
        cout<<str<<endl;
    }
    
}
int main()
{
    // string str;
    // cout<<"enter the roman string: ";
    // cin>>str;
    // romanToInt(str);
    int val;
    cout<<"enter the integer: "<<endl;
    cin>>val;
    intToRoman(val);

}