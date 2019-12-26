int searchInsert(int* nums, int numsSize, int target){
	int s=0;
	int e=numsSize;
	int h = numsSize/2;
	while(nums[h] != target) {
		if(h-1<0){
            if(nums[h]<target){
				return 1;
            }
			return 0;
		}
		else if(h == numsSize-1 && nums[h]<target){
			return numsSize;
		}
		else if(nums[h-1] < target && target<nums[h]){
			return h;

		}
		else if(nums[h] > target) {
			e=h;
			h = (s+e)/2;
		}
		else{
			s=h;
			h = (s+e)/2;
		}

	}
	return h;
}