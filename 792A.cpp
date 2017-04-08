#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    int k;
    vector < int > v,h;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
     sort(v.begin(),v.end());
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<n;j++ )
         {
              h.push_back(abs(v[i]-v[j]));
         }

     }
   sort(h.begin(),h.end());
    int i=1,cnt=1;
    while(h[i]==h[0])
       {
          cnt++;
          i++;
       }
    cout<<h[0]<<" "<<cnt<<endl;
}
