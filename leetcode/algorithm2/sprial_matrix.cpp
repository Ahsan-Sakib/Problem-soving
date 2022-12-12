#include<iostream>
#include<vector>
using namespace std;

vector<int> sprialOrderx(vector< vector<int> > &matrix){
    vector<int> result;
    int row = matrix.size(); // - row
    if(row == 0) return result;
    int column = matrix[0].size(); // - column
    int i(0),j(0), step(0),remain(row*column);
    while (remain>0)
    {
      if(remain == 1){
        result.push_back(matrix[row/2][column/2]);
        break;
      }
        //right
        for(int k = 0;remain>0 && k<column-2 * step -1;k++,remain--){
            result.push_back(matrix[i][j++]);
        }

          //down
        for(int k = 0;remain>0 && k<row-2 * step -1;k++,remain--){
            result.push_back(matrix[i++][j]);
        }

          //left
         for(int k = 0;remain>0 && k<column - 2 * step -1;k++,remain--){
            result.push_back(matrix[i][j--]);
        }

          //up
         for(int k = 0;remain>0 && k<row-2 * step -1;k++,remain--){
            result.push_back(matrix[i--][j]);
        }

        i++,j++,step++;
    }

    return result;
}


vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<vector<int> > dirs{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    vector<int> res;
    int nr = matrix.size();     if (nr == 0) return res;
    int nc = matrix[0].size();  if (nc == 0) return res;
    
    vector<int> nSteps{nc, nr-1};
    
    int iDir = 0;   // index of direction.
    int ir = 0, ic = -1;    // initial position
    while (nSteps[iDir%2]) {
        for (int i = 0; i < nSteps[iDir%2]; ++i) {
            ir += dirs[iDir][0]; ic += dirs[iDir][1];
            res.push_back(matrix[ir][ic]);
        }
        nSteps[iDir%2]--;
        iDir = (iDir + 1) % 4;
    }
    return res;
}


int main(){
    vector<vector<int>> matrixs = {{1,2,3},{4,5,6},{7,8,9}};

    vector<int> result = sprialOrder(matrixs);

   for(int i=0;i<result.size();i++){
    cout<<result[i]<<" ";
   }
}
