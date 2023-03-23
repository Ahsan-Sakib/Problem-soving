// http://www.shafaetsplanet.com/planetcoding/?p=1448
// directional array

#include<iostream>
using namespace std;

#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<= column

 int fx[]={+1,-1,+0,+0};
 int fy[]={+0,+0,+1,-1};

int move(){
    int x=5, y=3, row=5, column = 5, nx, ny;

    nx = x + 1;
    if(valid(nx,ny)){
        //Do something
    }
    nx = x -1;
    if(nx>=1 && nx<=row && ny >= 1 && ny<=column){
        //Do something
    }  

    for(int k=0;k<4;k++){
        int nx = x + fx[k];
        int ny = y + fy[k];
        if(valid(nx,ny)){
            ///Do something
        }
    }
}

int main(){

 

}