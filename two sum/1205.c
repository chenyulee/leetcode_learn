

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;

    int *result = malloc(sizeof(int)*2);
	int i, j, t;
	for(i = 0;i <numsSize; i++) {
		for(j = 0; j < numsSize; j++) {
			if(i != j ) {
				t = nums[i]+nums[j];// 0+1 0+2  0+3 1+0 1+2 1+3 2+0 2+1 2+3 3+0 3+1 3+2
				if(target == t) {
					result[0] = i;
                    result[1] = j;
					return result;
				}
			}
		}

	}
    return result;
}