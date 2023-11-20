int maxSubArray(int* nums,int numsSize){
	int i,ans=-2e9,s=0;
	for(i=0;i<numsSize;i++){
		s+=nums[i];
		if(s>ans)ans=s;
		if(s<0)s=0;
	}
	return ans;
}