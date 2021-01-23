# Week 1

---

### A - Identity Card

用一个switch，确定前两位数字对应的地名，保存到region字符串。通过一句printf输出。

```c
#include<stdio.h>
#include<string.h>
int main(){
	int n;
	char id[20],region[10];
	scanf("%d",&n);
	while(n--){
		scanf("%s",id);
		int p;
		p=(id[0]-'0')*10+(id[1]-'0');//前两位转为数字
		switch(p){	//把对应地名保存到region中
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
		printf("He/She is from %s,and his/her birthday is on %c%c,%c%c,%c%c%c%c based on the table.\n",region,id[10],id[11],id[12],id[13],id[6],id[7],id[8],id[9]);	//输出
	}
	return 0;
}
```

---

### B - Assistance Required

看似求素数，于是果断用埃氏筛，但WA。重读题后发现，由于已经出队的人不参与后面的报数，因此不是求素数。

幸运的是，$n\le3000$，所以模拟即可。本地尝试后发现结果最大是3.3e4，因此开50000大的数组够用。

  ```c
#include<stdio.h>
#define MAX 50000
int a[3002],b[MAX];	//a存答案，b存是否在队列内(0是1否)
int main(){
	int i=1,j=2;	//第1个幸运数是2
	for(;i<3001;j++){
		if(b[j])	continue;	//出队了就跳过
		a[i++]=j;	//没出队，计入答案
		int count=0;
		for(int k=j+1;k<MAX;k++){	//数到j就标记一下
			if(!b[k])	count++;
			if(count==j){
				count=0;
				b[k]=1;
			}
		}
	}
	int n;
	scanf("%d",&n);
	while(n){
		printf("%d\n",a[n]);
		scanf("%d",&n);
	}
	return 0;
}
  ```

---

### E - Train Problem I

车站是栈，用数组实现。

如果栈顶与左侧第一节车相同时，就可以出栈，产生一个out。不同的话，就取右侧第一个入栈，产生一个in。记录下每一步的操作，存入operation数组中。

如果右侧没有火车了，但栈里还有元素，栈顶又与左侧第一节车不同，就说明无解。此时输出"No"。

如果右侧和栈都空了，就说明符合题意。此时输出"Yes"，并按顺序输出operation数组即可。

```c
#include<stdio.h>
int main(){
	int n,i,j,finished,head,step,operation[20];
	char a[10],b[10],stack[10];
	while(~scanf("%d %s %s",&n,b,a)){
		finished=step=0;head=-1;
		for(i=0;i<n;i++){
			stack[++head]=b[i];
			operation[step++]=0;	//0:in,1:out
			while(head!=-1 && stack[head]==a[finished]){
				finished++;
				head--;
				operation[step++]=1;
			}
		}
		if(head>=0)	printf("No.\n");
		else{
			printf("Yes.\n");
			for(i=0;i<step;i++){
				if(operation[i])	printf("out\n");
				else	printf("in\n");
			}
		}
		printf("FINISH\n");
	}
	return 0;
}
```

