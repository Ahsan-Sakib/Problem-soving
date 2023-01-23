#include<iostream>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        if(n <= 0){
            return false;
        }
        if(n == 1) return true;
        while(1){
            while(n>0){
                int mod = n%10;
                cout<<"mod"<<mod<<" ";
                sum += mod*mod;
                n = n/10;
            }
            cout<<sum<<" ";
            if(sum == 1){
                return true;
            }else if(sum%10 == 5){
                return false;
            }else{
                n = sum;
                sum = 0;
                cout<<"sum"<<sum<<endl;
            }
        }

        return false;
    }
};

// class Solution {
// public:
//     int mark[11];

//     bool checkHappyNumber(int n){
//     int sum = 0;
//     if(n<10){
//         if(mark[n] > 0){
//             return false;
//         }
//     }
//     while (n != 0)
//     {
//         sum = sum + pow(n%10,2);
//         n = n/10;
//        // cout<<sum<<" "<<n<<endl;
//     }
//     //cout<<sum<<endl;
//     if(sum == 1) return true;
//     if(sum < 10){
//         mark[sum] = mark[sum]+1;
//     }
//     return checkHappyNumber(sum);
//     }


//     bool isHappy(int n) {
//         for(int i=0;i<10;i++){
//             mark[i] = -1;
//         }
//         return checkHappyNumber(n);
//     }
// };