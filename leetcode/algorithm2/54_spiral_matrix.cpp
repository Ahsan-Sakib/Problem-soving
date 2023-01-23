#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralOrder(vector< vector<int> > &matrix){
      vector<int> result;
      int row = matrix.size();
      int column = matrix[0].size();
      int m(0),n(0),step(0),remain(row*column);

      while (remain > 0)
      {
        if(remain == 1){
            result.push_back(matrix[row/2][column/2]);
           // cout<<matrix[row/2][column/2]<< " ";
            break;
        }

        //right
        for(int i=0;remain>0 && i<column-2 * step -1 ;remain--,i++){
            result.push_back(matrix[m][n++]);
        }

        //down
        for(int i=0;remain>0 && i<row-2 * step -1 ;remain--,i++){
            result.push_back(matrix[m++][n]);
           // cout<<matrix[m++][n]<<" ";
        }

        //left
        for(int i=0;remain>0 && i<column-2 * step -1 ;remain--,i++){
            result.push_back(matrix[m][n--]);
           // cout<<matrix[m][n--]<<" ";
        }

        //up
        for(int i=0;remain>0 && i<row-2 * step -1 ;remain--,i++){
            result.push_back(matrix[m--][n]);
           // cout<<matrix[m--][n] << " ";
        }

        m++,n++,step++;
      }   

      return result;
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> result = spiralOrder(matrix);

    for(int i =0 ;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}