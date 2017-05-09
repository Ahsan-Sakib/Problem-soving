#include<iostream>
#include<map>
#define ff first;
#define ss second;
#define be begine();
#define en end();
using namespace std;
int main()
{
    map<string,int>a;
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(a[s]==0)
        {
            cout<<"OK"<<endl;
            a[s]++;
        }

        else
            cout<<s<<a[s]++<<endl;
    }

}
