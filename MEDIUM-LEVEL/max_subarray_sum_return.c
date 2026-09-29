int maxSubArray(int* nums, int numsSize) {
    int currentsum=nums[0];
    int maxsum=nums[0];
    for(int i=1 ; i< numsSize ; i++){
    if(currentsum+nums[i]>nums[i]) {
        currentsum=currentsum +nums[i];
    }else{
        currentsum =nums[i];
    }
    if(maxsum<currentsum){
        maxsum=currentsum;
    }

  }
  return maxsum;
 }
 
