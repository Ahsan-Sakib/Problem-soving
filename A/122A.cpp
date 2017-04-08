//codeforces problem 122A
//30-3-17
#include<iostream>
using namespace std;
bool is
int main()
{
    int n;
    cin>>n;
    int temp=n;
    int i=0;
    if(n%4==0||n%7==0)
          i=0;
    else
          {
    while(temp>0)
    {

        if(temp%10!=4&&temp%10!=7)
           {
              cout<<"NO"<<endl;
              i++;
              break;
           }
temp/=10;
    }}
    if(i==0)
    cout<<"YES"<<endl;
}
