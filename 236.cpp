//Accepted
//20-03-17
#include<iostream>
using namespace std;
int a[30];
int main()
{
    string s;
    cin>>s;
    int len=s.size(),d=0,index;
    //cout<<static_cast <int>(s[0])<<endl;
    for(int i=0;i<len;i++)
    {
        index=static_cast <int>(s[i])-'a';
        //cout<<"in"<<index<<endl;
        //cout<<s[i]<<endl;
        if(a[index]==0)
        {
            d++;
            a[index]=1;
            //cout<<"a[index]"<<a[index]<<endl;
           // cout<<"d "<<d<<endl;
        }
    }
    if(d%2!=0)
        cout<<"IGNORE HIM!"<<endl;
    else
    cout<<"CHAT WITH HER!"<<endl;
}

