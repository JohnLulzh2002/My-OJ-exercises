void moveZeroes(int* nums,int numsSize){
	int l=0,r;
	for(r=0;r<numsSize;r++)
		if(nums[r])	nums[l++]=nums[r];
	for(;l<r;l++)
		nums[l]=0;
}