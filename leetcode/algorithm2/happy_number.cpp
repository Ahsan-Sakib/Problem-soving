#include<iostream>
#include<math.h>
using namespace std;

int mark[11];
bool isHappy(int n) {
    int sum = 0;
    if(n<10){
        if(mark[n] != -1){
            return false;
        }
    }
    while (n != 0)
    {
        sum = sum + pow(n%10,2);
        n = n/10;
        cout<<sum<<" "<<n<<endl;
    }
    cout<<sum<<endl;
    if(sum == 1) return true;
    if(sum < 10){
        mark[sum] = sum;
    }
    return isHappy(sum);
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<10;i++){
        mark[i] = -1;
    }
    bool happy = isHappy(n);

    if (happy){
        cout<<"A happy number";
    }else{
        cout<<"Not a happy number";
    }
}