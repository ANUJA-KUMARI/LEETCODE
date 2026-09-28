#include<stdio.h>
#include<stdlib.h>
int main(){
    int m,n; //rows*column

     int **matrix=(int **)malloc(m*sizeof(int *));
    for (int i = 0; i < m; i++) {
        matrix[i] = (int *)malloc(n*sizeof(int));
    }
    int matrixsize =m ;
    int matrixColsize =n ;
    int total = matrixsize * matrixColsize;
    int top=0;
    int bottom=matrixsize-1;
    int left =0;
    int right =matrixColsize-1;
     int count=0;
    int *result=malloc(total * sizeof(int));
   
    while(top<=bottom && right>=left){
        for(int j =left ; j<=right ; j++){
            result[count] =matrix[top][j];
            count++;
        }
        top++;
        for(int j= top ;j<=bottom ;j++){
            result[count]=matrix[j][right];
            count++;
        }
        right--;

    if(top<=bottom){
        for(int j=right; j>=left ;j--){
            result[count]=matrix[bottom][j];
            count++;
        }
        bottom--;
    }
    if(left<= right){
        for(int j=bottom ; j>=top ;j--){
            result[count]=matrix[j][left];
            count++;
        }
        left++;
    }
}
    return 0;
}