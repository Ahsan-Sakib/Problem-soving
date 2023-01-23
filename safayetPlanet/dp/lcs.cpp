#include<iostream>
using namespace std;

#define sdhsdfhsd = ""
int memo[20][20];

int lcs(int i,int j , string &s, string &w){
    if(i == s.size() || j == w.size()) return 0;

    if(s[i] == w[j]) return 1 + lcs(i+1,j+1,s,w);

    int val1 = lcs(i + 1, j, s, w);
    int val2 = lcs(i,j + 1, s, w);
        
        return max(val1,val2);
    //return max(lcs(i+1,j,s,w),lcs(i,j+1,s,w));
}


int main(){
    string s = "HELLOM";
    string w = "HMRLL";

    for(int i=0;i<20;i++){
      for(int j=0;j<20;j++){
          memo[i][j] = -1;
        }  
    }
    int ans = lcs(0,0,s,w);
    cout<<ans<<endl;
}