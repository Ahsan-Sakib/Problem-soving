#include<iostream>
#include<string>

using namespace std;

int main(){
    string abc = "abc";
    string a = abc.substr(0,abc.size());
    cout<<a<<endl;
    string b = abc.substr(0,1) + abc.substr(2,abc.size());
    cout<<b<<endl;

}