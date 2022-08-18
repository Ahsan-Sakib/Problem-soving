//accepted
#include<iostream>
using namespace std;


int main(){
    int t,n,k,minimumNumber,numberofSwap;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        int permutation[n];
        numberofSwap = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>permutation[i];
            if(i<k && permutation[i]>k){
                numberofSwap++;
            }
        }
        cout<<numberofSwap<<endl;
    }
}