#include<stdio.h>
#include<stdlib.h>
int main(){
    int row ;
    printf(" enter the numver of rows : ");
    scanf("%d" ,&row);
    int(* intervals)[2] = malloc(row *  sizeof(*intervals));
    int size;
    for( int i=0; i<row-1 ;i++){
        for(int j =0 ;j<2 ;j++){
         printf("enter the value of interval[%d][%d]", &i , &j);
         scanf("%d" , &intervals[i][j]);
        }
    }
    for(int i=0 ; i<row-1;i++){
        if(size==0 || intervals[i][0]<intervals[i][0]){
            return intervals;
        }
        if
        if(intervals[i][1]>=intervals[i+1][0]){
            if(intervals[i + 1][1] > intervals[i][1]) {
                intervals[i][1] = intervals[i + 1][1];
            }
        }
    for(int j = i + 1; j < size - 1; j++) {

          intervals[j][0] = intervals[j + 1][0];
          intervals[j][1] = intervals[j + 1][1];
            }

            size--;

    i--;

    }
    return 0;
}
