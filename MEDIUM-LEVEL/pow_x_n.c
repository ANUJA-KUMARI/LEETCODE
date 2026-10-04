#include<stdio.h>
#include<stdlib.h>
double mypow(double x, int n){
    if(n==0){
        return 1;

    }else if(n<0){
        return 1/x * mypow(1/x, -(n+1));
    }else{
        return x * mypow(x, n-1);
    }
}
