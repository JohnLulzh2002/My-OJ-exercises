char* mergeAlternately(char* word1,char* word2){
	char *s=(char*)malloc(strlen(word1)+strlen(word2)+1),p=0;
	while(*word1&&*word2){
		s[p++]=*(word1++);
		s[p++]=*(word2++);
	}
	if(*word2)
		word1=word2;
	while(*word1)
		s[p++]=*(word1++);
	s[p]=0;
	return s;
}