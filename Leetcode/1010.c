int f(int a){
	return (long long)a*(a-1)/2;
}
int numPairsDivisibleBy60(int* time,int timeSize){
	int a[60]={},i,s=0;
	for(i=0;i<timeSize;i++)
		a[time[i]%60]++;
	for(i=1;i<30;i++)
		s+=a[i]*a[60-i];
	return s+f(a[0])+f(a[30]);
}