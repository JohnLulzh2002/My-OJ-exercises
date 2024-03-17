int cmp(const void*a,const void*b)
{return *(int*)a-*(int*)b;}
long long minimumRemoval(int* beans,int beansSize){
	qsort(beans,beansSize,sizeof(int),cmp);
	long long ans,s=0,a;
	for(int i=0;i<beansSize;i++)
		s+=beans[i];
	ans=s;
	for(int i=0;i<beansSize;i++){
		a=s-(long long)beans[i]*(beansSize-i);
		if(a<ans)ans=a;
	}
	return ans;
}