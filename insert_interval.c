#include<stdio.h>
#include<stdlib.h>
 
int main(){
    int intervals[100][2];
    int newInterval[2];
    int size =2;
    int result[200][2];
    int resultSize = 0;

    int i = 0;
      while (i < size && intervals[i][1] < newInterval[0]) {
        result[resultSize][0] = intervals[i][0];
        result[resultSize][1] = intervals[i][1];

        resultSize++;
        i++;
    }
 
    while (i < size && intervals[i][0] <= newInterval[1]) {

        if (intervals[i][0] < newInterval[0]) {
            newInterval[0] = intervals[i][0];
        }

        if (intervals[i][1] > newInterval[1]) {
            newInterval[1] = intervals[i][1];
        }

        i++;
    }

    result[resultSize][0] = newInterval[0];
    result[resultSize][1] = newInterval[1];
    resultSize++;
    while (i < size) {

        result[resultSize][0] = intervals[i][0];
        result[resultSize][1] = intervals[i][1];

        resultSize++;
        i++;
    }
      
    printf("Result:\n");

    for (i = 0; i < resultSize; i++) {
        printf("[%d, %d]\n",
               result[i][0],
               result[i][1]);
    }



}