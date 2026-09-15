#include<stdio.h>
#include<stdlib.h>
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
int sequence(int n , int k){
    int num=fact(n);
    int size=n;
     int *arr = (int *)malloc(size * sizeof(int));
   
    for(int i=1; i<=size ;i++){
        arr[i-1]=i;
    }
    char *result = (char *)malloc((n + 1) * sizeof(char));
    for(int i=0;i<size ;i++){
        int index=(k-1)/fact(size-i-1);
        result[i]=arr[index];
        // Remove the selected element from the array
        for(int j=index; j<size-1; j++){
            arr[j]=arr[j+1];
        }
        size--;
        k=(k-1)%fact(size-i-1)+1;
    }
    result[n]='\0';
    return result;
}
int main(){
    int array[100];
    int size=0;
    printf("enter the lenght if size");
    scanf("%d", &size);
    for(int i=0; i<size ;i++){
        scanf("%d" ,array[i]);
    }
    int possible_number=fact(size);
    int k;
    printf("enter the value of k");
    scanf("%d" , &k);
}