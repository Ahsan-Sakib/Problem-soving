#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int a;
        cin>>a;
        if(a==0){
            cout <<0<<endl;
        }
        if(a==1){
            cout<<1<<endl;
        }else if(a==5){
            cout<<2<<endl;
        }else if (a==7)
        {
            cout<<3<<endl;
        }else{
            cout<<a/2;
        }
    }
}