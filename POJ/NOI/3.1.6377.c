#include<stdio.h>
#include<string.h>
int main(){
	struct stu{char name[21];int month,day;}a[181];
	char name[181][21],temp[21];
	int n,i=0,j,k,s,x,y,none=1;
	scanf("%d",&n);
	for(;i<n;i++)
		scanf("%s%d%d",a[i].name,&a[i].month,&a[i].day);
	for(i=1;i<13;i++) for(j=1;j<32;j++){
		s=0;
		for(k=0;k<n;k++)
			if(a[k].month==i&&a[k].day==j){
				strcpy(name[s],a[k].name);
				s++;
			}
		if(s>1){
			none=0;
			for(x=0;x<s;x++)
				for(y=x+1;y<s;y++){
					if(strlen(name[x])>strlen(name[y])){
						strcpy(temp,name[x]);
						strcpy(name[x],name[y]);
						strcpy(name[y],temp);
						continue;
					}
					if(strlen(name[x])==strlen(name[y]))
						for(k=0;name[x][k];k++){
							if(name[x][k]<name[y][k])
								break;
							if(name[x][k]>name[y][k]){
								strcpy(temp,name[x]);
								strcpy(name[x],name[y]);
								strcpy(name[y],temp);
								break;
							}
						}
				}
			printf("%d %d",i,j);
			for(k=0;k<s;k++)
				printf(" %s",name[k]);
			printf("\n");
		}
	}
	if(none)
		printf("None");
	return 0;
} 
