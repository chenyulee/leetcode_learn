

int removeElement(int* nums, int numsSize, int val) {
	// [2,2,1,4,5,3,4,5] val=3
	int answer[numsSize] = {};
	int cnt = 0;
	int i = 0;
	for (i = 0; i < numsSize; i++) { // 找不是val的放到answer裡
		// i == 7, nums[7] == 5, val == 3
		if (nums[i] != val) {
			// cnt = 5, 
			answer[cnt] = nums[i];
			cnt++; 
		}
	}
	// [2,2,1,4,5,0,0,0]
	

	//把答案複製回去
	for (int i = 0; i < cnt; i++) {
		nums[i] = answer[i];
	}

	return cnt;

}
