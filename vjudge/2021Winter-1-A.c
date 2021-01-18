#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char id[20],region[10];
	scanf("%d",&n);
	while(n--){
		scanf("%s",id);
		int p;
		p=(id[0]-'0')*10+(id[1]-'0');
		switch(p){
			case 33:
				strcpy(region,"Zhejiang");break;
			case 11:
				strcpy(region,"Beijing");break;
			case 71:
				strcpy(region,"Taiwan");break;
			case 81:
				strcpy(region,"Hong Kong");break;
			case 82:
				strcpy(region,"Macao");break;
			case 54:
				strcpy(region,"Tibet");break;
			case 21:
				strcpy(region,"Liaoning");break;
			case 31:
				strcpy(region,"Shanghai");
		}
		printf("He/She is from %s,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",region,id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);
	}
	return 0;
}