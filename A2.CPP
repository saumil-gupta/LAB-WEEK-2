#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"ENTER THE STRING : ";
    getline(cin,s);
    cout<<"REVERSED STRING : ";
    for(int i=s.length()-1;i>=0;i--)
    {
        cout<<s[i];
    }
    return 0;
}