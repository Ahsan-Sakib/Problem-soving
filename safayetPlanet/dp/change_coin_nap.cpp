#include<iostream>
#include<vector>
using namespace std;

#define MAX_N 20
#define MAX_W 10000

#define INF 99999999
#define EMPTY_VALUE -1

int C[MAX_N];
int mem[MAX_N][MAX_W];
int n;

int f(int i, int W) {
    if (W < 0) return INF;
    if (i == n) {
        if (W == 0) return 0;
        return INF;
    }

    if (mem[i][W] != EMPTY_VALUE) {
        return mem[i][W];
    }

    int res_1 = 1 + f(i + 1, W - C[i]);
    int res_2 = f(i + 1, W);

    mem[i][W] = min(res_1, res_2);

    return mem[i][W];
}

int coinChange(){
    int count = INF;
    for(int i=0;i<n+1;i++){
        count = f(i,22);
        cout<<count<<endl;
    }
  //  cout<<count<<endl;
    return 0;
}

int main(){
    vector<int> abc = {2,5,9,13,15};
    n = abc.size() - 1;

    for(int i=0;i<MAX_N;i++){
         for(int j=i;j<MAX_N;j++){
            mem[i][j] = 0;
        }
    }
    for(int i=0;i<n+1;i++){
        C[i] = abc[i];
    }
    cout<<f(0,22)<<endl;
    return 0;
}