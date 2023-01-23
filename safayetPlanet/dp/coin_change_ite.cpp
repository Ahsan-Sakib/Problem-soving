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

int evaluate_table(int i, int W, int n) {
    if (W < 0) return INF;
    if (i == n) {
        if (W == 0) return 0;
        return INF;
    }
    
    return mem[i][W];
    
}

int coin_change_iterative(int n, int target) {
    for (int i = n - 1;i >= 0;i--) {
        for (int w = 0; w <= target; w++) {
            
            int res_1 = 1 + evaluate_table(i + 1, w - C[i], n);
            int res_2 = evaluate_table(i + 1, w, n);
            mem[i][w] = min(res_1, res_2);
        }
    }
    
    return mem[0][target];
}

int main(){
    vector<int> abc = {2,5,9,13,15};
    n = abc.size();

    for(int i=0;i<MAX_N;i++){
         for(int j=i;j<MAX_N;j++){
            mem[i][j] = 0;
        }
    }
    for(int i=0;i<n;i++){
        C[i] = abc[i];
    }
   cout<<coin_change_iterative(n,22)<<endl;
    return 0;
}