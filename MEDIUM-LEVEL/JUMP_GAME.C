#include<stdio.h>
#include <stdbool.h>
bool canjump(int *nums , int numsSize){
    int farthest = 0;

    for (int i = 0; i < numsSize; i++)
    { 
        if (i > farthest)
        {
            return false;
        }
        if (i + nums[i] > farthest)
        {
            farthest = i + nums[i];
        } 
        if (farthest >= numsSize - 1)
        {
            return true;
        }
    }

    return false;
}
int main(){

}
