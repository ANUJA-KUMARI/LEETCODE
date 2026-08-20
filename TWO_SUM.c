// #Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

 

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 

// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.
 

// Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?

  #include <stdio.h>
#include<stdlib.h>
struct array{
    int size;
    int *ptr;
};
void createarray(struct array *arr , int s ){
    arr->size=s;
    arr->ptr=(int*)malloc(s*sizeof(int));

    for(int i=0; i<s;i++){
        scanf("%d" , &arr->ptr[i]);
    }  
}
int targetindex(struct array * arr , int target){
    for(int i=0;i<arr->size;i++){
        for(int j=i+1 ;j<arr->size ; j++){
            if(arr->ptr[i]+arr->ptr[j]==target){
                printf("[ %d , %d]" ,i, j);
                return 1;
            }else{

            }
        }
    }
    return 0;
}
int main(){
    struct array * arr;
    arr = (struct array *)malloc(sizeof(struct array));
    printf("enter the size of array");
    scanf("%d" ,&arr->size);
    createarray(arr, arr->size);
    int t;
    printf("Enter the target value: ");
    scanf("%d", &t);
    targetindex(arr, t);
    return 0;

}