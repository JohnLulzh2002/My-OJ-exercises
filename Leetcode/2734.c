char* smallestString(char* s){
	int i=0;
	while(s[i]=='a')
		i++;
	if(!s[i])
		s[i-1]='z';
	while(s[i]>'a')
		s[i++]--;
	return s;
}