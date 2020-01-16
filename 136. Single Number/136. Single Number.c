
int singleNumber(int* nums, int numsSize){
    int i = 0;
    int j = 0;
    if(nums==1){
        return nums[0];
    }
    for(i = 0; i < numsSize; i++){
        for(j = 0; j < numsSize; j++){
            if(i != j){
                if(nums[i] == nums[j])
                {
                    break;
                }
            }
        }
        if(numsSize  == j){
            return nums[i];
        }
        
    }
    return 0;
}