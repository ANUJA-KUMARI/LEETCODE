#include<stdio.h>
int maxwater_container(int *arr , int size){
    int left=0;
    int right = size-1;
    int max_water=0;
    while(left<right){
        int h;
        if(arr[left]<arr[right]){
          h=arr[left];  
        }else{
            h=arr[right];
        }
        int area= h*(right-left);
        if(area > max_water){
            max_water=area;
        }
        if(arr[left]<arr[right]){
            left++;
        }else{
            right--;
        }
    }
   return max_water;
}
int main(){
    int arr[10];
    printf("enter the array element");
    for(int i=0; i<10 ;i++){
        scanf("%d" , &arr[i]);
    }
    printf(maxwater_container(arr , 10));
    return 0;
}