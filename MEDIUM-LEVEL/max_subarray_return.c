int maxSubArray(int* nums, int numsSize) {
    int currentsum=nums[0];
    int maxsum=nums[0];
    int start=0;
    int end=0;
    int temp_start=0;
    for(int i=1 ; i< numsSize ; i++){
    if(currentsum+nums[i]>nums[i]) {
        currentsum=currentsum +nums[i];
        temp_start=i;
    }else{
        currentsum =nums[i];
    }
    if(maxsum<currentsum){
        maxsum=currentsum;
        start=temp_start;
        end=i;
    }


  }
  int size=end-start;
  int result[]=malloc(size * sizeof(int));
  for(int i=start ; i<=end ;i++){
    result[i]=nums[i];
  }
  return result;
  
 }
