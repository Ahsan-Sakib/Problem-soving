//wrong answer

#include<iostream>
using namespace std;


int main(){
    int t,n,k,minimumNumber,numberofSwap;
    cin>>t;
    while (t--)
    {
        cin>>n>>k;
        int permutation[n];
        minimumNumber = 1;
        numberofSwap = 0;
        for (int i = 0; i < n; i++)
        {
          cin>>permutation[i];
          if(i == 0){
            minimumNumber = permutation[i];
          }
          if(minimumNumber > permutation[i]){
            minimumNumber = permutation[i];
          }
        }

        for(int i=0;i<k;i++){
            if(permutation[i]!=minimumNumber){
                for(int j=i;j<n;j++){
                    if(permutation[j] == minimumNumber){
                        permutation[j]  =  permutation[i];
                        permutation[i] = minimumNumber;
                        numberofSwap ++;
                    }
                }
            }
            minimumNumber++;
        }
        cout<<numberofSwap<<endl;
    }
}