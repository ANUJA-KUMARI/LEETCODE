#include<stdio.h>
#include<stdlib.h>
int n;
int row;
int col;
int **board;
int main(){
int **board=(int **)malloc(row*sizeof(int *));
    for (int i = 0; i < row; i++) {
        board[i] = (int *)malloc(n*sizeof(int));
    }
}
int isSafe(int row , int col ){
  for(int i =0 ;i<row;i++){
      board[i][col]='Q';
      return 0;
  }
  int i=row-1;
  int j=col-1;
  while(i>=0 && j>=0){
    if(board[i][j]=='Q'){
        return 0;
    }else{
        i--;
        j--;
    }
  }
  int i=row-1;
  int j=col+1;
  while(i>=0 && col<=n){
    if(board[i][j]=='Q'){
        return;
    }
    i--;
    j++;
  }

  return 1;
}
void solve(int row , int **board)
{
    // All rows completed
    if (row == n)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%s\n", board[i]);
        }

        printf("\n");
        return;
    }

    for (int col = 0; col < n; col++)
    {
        if (isSafe(row, col))
        {
             
            board[row][col] = 'Q';

            
            solve(row + 1);

            
            board[row][col] = '.';
        }
    }
}
