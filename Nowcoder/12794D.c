#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	int point,win,loss,draw,goals,goala;
	char name[100];
}Team;
int cmp(const void*a,const void*b){
	Team *q=(Team*)a,*w=(Team*)b;
	if(q->point!=w->point)return w->point-q->point;
	if((q->goals-q->goala)!=(w->goals-w->goala))return (w->goals-w->goala)-(q->goals-q->goala);
	if(q->goals!=w->goals)return w->goals-q->goals;
	return strcmp(q->name,w->name);
}
int main(){
	int n,temp=1;
	scanf("%d",&n);
	for(;temp<=n;temp++){
		Team a[33]={};
		int t,g;
		scanf("%d%d",&t,&g);
		int i;
		for(i=0;i<t;i++)
			scanf("%s",a[i].name);
		for(i=0;i<g;i++){
			char na[33],nb[33];
			int ga,gb;
			scanf("%s%d%s%d",na,&ga,nb,&gb);
			int j;
			for(j=0;j<t;j++){
				if(!strcmp(na,a[j].name)){
					a[j].goals+=ga;
					a[j].goala+=gb;
					if(ga>gb){
						a[j].point+=3;
						a[j].win++;
					}
					if(ga==gb){
						a[j].point+=1;
						a[j].draw++;
					}
					if(ga<gb)
						a[j].loss++;
				}
				if(!strcmp(nb,a[j].name)){
					a[j].goals+=gb;
					a[j].goala+=ga;
					if(ga<gb){
						a[j].point+=3;
						a[j].win++;
					}
					if(ga==gb){
						a[j].point+=1;
						a[j].draw++;
					}
					if(ga>gb)
						a[j].loss++;
				}
			}
		}
		printf("Group %d:\n",temp);
		qsort(a,t,sizeof(Team),cmp);
		for(i=0;i<t;i++)
			printf("%s %d %d %d %d %d %d\n",a[i].name,a[i].point,a[i].win,a[i].loss,a[i].draw,a[i].goals,a[i].goala);
		printf("\n");
	}
	return 0;
}