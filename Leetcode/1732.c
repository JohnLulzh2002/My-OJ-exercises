int largestAltitude(int* gain,int gainSize){
	int ans=0,s=0,i=0;
	for(;i<gainSize;i++){
		s+=gain[i];
		if(s>ans)ans=s;
	}
	return ans;
}