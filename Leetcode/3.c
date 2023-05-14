int lengthOfLongestSubstring(char* l){
	char*r;
	int c[200]={},ans=0;
	for(r=l;*r;r++){
		c[*r]++;
		if(c[*r]-1)while(c[*r]-1)
			c[*(l++)]--;
		if(r-l+1>ans)ans=r-l+1;
	}
	return ans;
}