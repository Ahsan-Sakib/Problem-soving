#include <iostream>
#include <vector>
using namespace std;

vector<int> findBallx(vector<vector<int>> &grid)
{
    int m = grid.size();    // number of row
    int n = grid[0].size(); // number of column
    vector<int> result;

    for (int i = 0; i < n; i++)
    {
        // Start from the ith col and 0 th row.
        int column = i, row = 0;
        for (; row < m; row++)
        {

            // Get the next Column, it will be either column+1 or column-1.
            int nextColumn = column + grid[row][column];

            // Is next Column valid? if valid check the direction of nextColumn and current Column on the same row.
            if (nextColumn >= n || nextColumn < 0 || grid[row][nextColumn] != grid[row][column])
                break;
            column = nextColumn;
        }

        // Are we able to reach the last row? If yes store the column, else -1
        row == m ? result.push_back(column) : result.push_back(-1);
    }

    return result;
}

bool isValid(int row,int col,int n,int m){
    return(row>=0 && col>=0 && row<n && col<m);
}

int solve(vector<vector<int>>& grid,int n,int m,vector<vector<int>> &dp,int row,int col){
    if(row == n) return col;

    if(isValid(row,col,n,m)){
        if(grid[row][col] == 1 && isValid(row,col+1,n,m) && grid[row][col+1] == 1){
            if(dp[row+1][col+1] != INT_MIN){
                return dp[row+1][col+1];
            }
        }else{
            return dp[row+1][col+1] = solve(grid,n,m,dp,row+1,col+1);
        }

        if(grid[row][col] == -1 && isValid(row,col-1,n,m) && grid[row][col-1] == -1){
 if(dp[row+1][col-1] != INT_MIN){
                return dp[row+1][col-1];
            }
        }else{
                        return dp[row+1][col-1] = solve(grid,n,m,dp,row+1,col-1);

        }
    }

    return -1;
}


vector<int> findBall(vector<vector<int>> &grid)
{
    int row = grid.size();    // number of row
    int col = grid[0].size(); // number of column
    vector<int> ans(col,0);
    vector<vector<int>>dp(101,vector<int>(101,INT_MIN));

    for(int i=0;i<col;i++){
        ans[i] = solve(grid,row,col,dp,0,i);
    }
    return ans;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1, -1, -1}, {1, 1, 1, -1, -1}, {-1, -1, -1, 1, 1}, {1, 1, 1, 1, -1}, {-1, -1, -1, -1, -1}};

    findBall(matrix);
}
