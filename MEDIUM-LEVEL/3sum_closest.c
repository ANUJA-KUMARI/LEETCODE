#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[10];
    printf("enter the array element");
    for(int i=0; i<10 ;i++){
        scanf("%d" , &arr[i]);
    }
    int  target;
    printf("enter the value of traget ");
    scanf("%d", &target);
    
    int one =0;
    int two =1;
    int three =2;
    int sum = arr[0]+arr[1]+arr[2];
     for(int one=0;one<=7;one++){
        for(int two=1 ;two<=8;two++){
            for(int three=2;three<=9;three++){
                 int x=arr[one]+arr[two]+arr[three];
                 if(abs(x-target)<abs(sum-target)){
                    sum=x;
                 }
                }
                 
            } 
        }
         printf("Closest sum = %d\n", sum);
      
    return 0;
}