 #include <stdio.h>
#include <stdlib.h>

void mergearray(int *num1, int *num2 , int *final) {
     
    int i = 0;
    int j = 0;
    int a = 0;

    while(i < 6 && j < 6) {

        if(num1[i] <= num2[j]) {

            final[a] = num1[i];

            a++;
            i++;

        } else {

            final[a] = num2[j];

            a++;
            j++;
        }
    }

     
    while(i < 6) {

        final[a] = num1[i];

        a++;
        i++;
    }

     
    while(j < 6) {

        final[a] = num2[j];

        a++;
        j++;
    }

    for(int i = 0; i < 12; i++) {

        printf("%d ", final[i]);
    }
}
//since here the size of final array is 12 which is even then we can directly calculate the median 
//other wise we have to figure it out whetehr the size is even or odd
double median(int *final , int size){
    int term1, term2;
  if(size%2==0){
    
    term1=(size/2)-1;
    term2 = (size+1)/2;
    double m=(final[term1]+final[term2])/2;
    return m;
  }else{
    term1=size/2;
    double n=final[term1];
    return n;
  }
}

int main() {

    int num1[6] = {1, 2, 3, 4, 6, 7};

    int num2[6] = {3, 5, 6, 7, 8, 9};

    int final[12];

    mergearray(num1, num2 , final);
    double m = median(final, 12);
    printf("\nMedian = %.2f", m);

    return 0;
}
