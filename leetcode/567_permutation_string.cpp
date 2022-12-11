#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void permutation(string& s,int l,int r,vector<string>& permutationVector){
        if(l==r){
           // cout<<"permutation is "<<s<<endl;
           permutationVector.push_back(s); 
        }else{
            for(int i=l;i<=r;i++){
                swap(s[l],s[i]);
                permutation(s,l+1,r,permutationVector);
                swap(s[l],s[i]);
            }
        }
    }
  
    bool checkInclusion(string s1, string s2) {
        vector<string> permutationVector;
        int sizeofS2 = s2.size();
        int sizeofS1 = s1.size();
        bool status = false;
        permutation(s1,0,s1.size()-1,permutationVector);
        for(int i=0;i<permutationVector.size();i++){
           // cout<<"permutation is "<<permutationVector[i]<<endl;
           for(int j=0;j<sizeofS2;j++){
              if(j+sizeofS1 <= sizeofS2){
                string newsubString = s2.substr(j, sizeofS1);
             //   cout<<"new "<<newsubString<<" permutation vector "<<permutationVector[i]<<endl;
                if(newsubString == permutationVector[i]) return true;
              } else{
                  status = false;
              }
           }
        }
        return status;
    }
};


int main(){

}