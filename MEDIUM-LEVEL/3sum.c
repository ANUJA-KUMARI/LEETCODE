#include<stdio.h>

int main(){
    int arr[10];
    printf("enter the array element");
    for(int i=0; i<10 ;i++){
        scanf("%d" , &arr[i]);
    }
    int one =0;
    int two =1;
    int three =2;
     for(int one=0;one<=7;one++){
        for(int two=1 ;two<=8;two++){
            while(int three=2;three<=9;three++){
                if(arr[one]+arr[two]+arr[three]==0){
                    printf("%d , %d , %d",&arr[one] ,&arr[two] , &arr[three]);
                }
                 
            } 
        }
      
    }
    return 0;
}