int cmp(const void*a,const void*b)
{return *(int*)a-*(int*)b;}
int splitNum(int num){
	int d[9],c=0,ans=0,p=1;
	while(num){
		if(num%10)
			d[c++]=num%10;
		num/=10;
	}
	qsort(d,c,sizeof(int),cmp);
	for(;c;p*=10){
		ans+=d[--c]*p;
		if(c)
			ans+=d[--c]*p;
	}
	return ans;
}