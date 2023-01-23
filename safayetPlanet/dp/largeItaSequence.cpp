#include<iostream>
#include<vector>
using namespace std;
#define MAX_N 20
#define EMPTY_VALUE -1

int mem[MAX_N];

int f(int i, vector<int> &A) {
    if (mem[i] != EMPTY_VALUE) {
        return mem[i];
        
    }
    
    int ans = 0;
    for (int j = i + 1;j < A.size();j++) {
        if (A[j] > A[i]) {
            ans = max(ans, f(j, A));
        }
    }
    
    mem[i] = ans + 1;
    return mem[i];
}

int findLIS(vector<int> A){
  int ans = 0;
  
  for(int i = 0;i<A.size();i++) {
      mem[i] = EMPTY_VALUE;
  }
  
  for(int i = 0;i<A.size();i++) {
      ans = max(ans, f(i, A));
  }

  return ans;
}


int main(){
    vector<int> abc = {5,0,0,2,7,3,4};
    int ans = findLIS(abc);
    cout<<ans<<endl;
}