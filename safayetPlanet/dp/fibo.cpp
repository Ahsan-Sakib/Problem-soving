#include<iostream>
using namespace std;

#define MAX_N 20
#define EMPTY_VALUE -1

int memo[MAX_N + 1];


int fibo(int n){
    if(n==0) {
      //  cout<<0<<" ";
       memo[n] = 0;
        return 0;
    }
    if(n==1) {
        memo[n] = 1;
       // cout<<1<<" ";
        return 1;
    }

    if(memo[n]!=-1){
        return memo[n];
    }

    memo[n] = fibo(n-1) + fibo(n-2);
   // cout<<memo[n]<<endl;
    return memo[n];
}

int main(){
    // int n;
    // cout<<"Enter the end number "<<endl;
    // cin>>n;
    // int fib[n];

    for(int i=0;i<MAX_N;i++){
        memo[i] = EMPTY_VALUE;
    }

   int n = fibo(10);
   cout<<n;

    // for(int i=0;i<MAX_N;i++){
    //     cout<<memo[i]<<" ";
    // }
 }