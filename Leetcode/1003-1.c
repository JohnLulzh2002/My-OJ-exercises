#include<stdbool.h>
bool isValid(char *s){
	char stack[20002];
	short top=0;
	// short c[3]={};
	// for(;*s;s++){
	// 	c[*s-'a']++;
	// 	if(c[0]<c[1]||c[1]<c[2])
	// 		return false;
	// }
	for(;*s;s++){
		stack[top++]=*s;
		if(top>2&&stack[top-3]=='a'&&stack[top-2]=='b'&&stack[top-1]=='c')
			top-=3;
	}
	return top==0;
}