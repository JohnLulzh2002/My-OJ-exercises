char* gcdOfStrings(char* str1,char* str2){
	int i,t;
	for(i=0;str1[i]&&str2[i];i++)
		if(str1[i]!=str2[i])
			return "";
	if(!str1[i]&&!str2[i])
		return str1;
	if(str1[i]&&!str2[i])
		return gcdOfStrings(str2,str1+i);
	return gcdOfStrings(str1,str2+i);
}