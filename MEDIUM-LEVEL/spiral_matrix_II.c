#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d" , &n);
    int **matrix=(int **)malloc(n*sizeof(int *));
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(n*sizeof(int));
    }
    int top=0;
    int bottom=n-1;
    int right=n-1;
    int left=0;
    int num=0;
 
for (int j = left; j <= right; j++) {
    matrix[top][j] = num++;
}
top++;
for (int i = top; i <= bottom; i++) {
    matrix[i][right] = num++;
}

right--;

for (int j = right; j >= left; j--) {
    matrix[bottom][j] = num++;
}

bottom--;
for (int i = bottom; i >= top; i--) {
    matrix[i][left] = num++;
}

left++;

}