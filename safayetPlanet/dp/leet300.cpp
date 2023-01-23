#include<iostream>
#include<vector>
using namespace std;

int memo[20];

int f(vector<int>& nums,int i){
       int ans = 0;
       if(memo[i] != -1){
              return memo[i];
       }
       for (int j = i+1;j<nums.size();j++){
              if(nums[j]>nums[i]){
                     ans = max(ans,f(nums,j));
              }
       }
       memo[i] = ans + 1;
       return memo[i];
}

int lengthOfLIS(vector<int>& nums) {
       int ans = 0;
       int vectorSize = nums.size();
       for(int i = 0;i<vectorSize;i++) {
               memo[i] = -1;
              }
       for(int i=0;i<= vectorSize;i++){
              ans = max(ans,f(nums,i));
       }

       return ans;
}


int main(){
    vector<int> nums = {10,9,2,5,3,7,101,18};
    int a = lengthOfLIS(nums);
    cout<<a<<endl;

    for(int i=0;i<nums.size();i++){
       cout<<memo[i]<<" ";
    }
}