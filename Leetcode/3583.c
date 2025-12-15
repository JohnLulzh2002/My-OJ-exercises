#include<stdio.h>
#include<string.h>
#define MAXN 100005
int specialTriplets(int* nums,int numsSize){
	int l[MAXN],r[MAXN],count[MAXN]={};
	long long ans=0;
	for(int i=0;i<numsSize;i++){
		l[i]=(nums[i]*2<MAXN) ? count[nums[i]*2] : 0;
		count[nums[i]]++;
	}
	memset(count,0,sizeof(int)*MAXN);
	for(int i=numsSize-1;i>=0;i--){
		r[i]=(nums[i]*2<MAXN) ? count[nums[i]*2] : 0;
		count[nums[i]]++;
	}
	for(int i=1;i<numsSize;i++){
		ans+=(long long)l[i]*r[i];
		ans%=1000000007;
	}
	return ans;
}
int main(){
	int a[]={6,3,6};
	printf("%d\n",specialTriplets(a,3));
	return 0;
}