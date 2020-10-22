#include<string.h>
#include<stdio.h>
int main(){
	int n,i=0,j;
	struct stu{char name[21];int score;}t,a[21];
	scanf("%d",&n);
	for(;i<n;i++)
		scanf("%s %d",a[i].name,&a[i].score);
	for(i=0;i<n;i++)for(j=i+1;j<n;j++)
		if(a[i].score<a[j].score){
			t=a[i];a[i]=a[j];a[j]=t;
		}
	for(i=0;i<n;i++)
		for(j=i+1;a[j].score==a[i].score;j++)
			if(strcmp(a[i].name,a[j].name)>0){
				t=a[i];a[i]=a[j];a[j]=t;
			}
	for(i=0;i<n;i++)
		printf("%s %d\n",a[i].name,a[i].score);
	return 0;
}