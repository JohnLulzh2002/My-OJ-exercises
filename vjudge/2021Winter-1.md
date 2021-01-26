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

### C - Numerically Speaking

总体上讲是10进制和26进制相互转换。但是麻烦的是：a看作0的话，aa,aaa之类的都是0，所以要把a看作1，z看作26。这样一来，在进制转换时出现余数为0就应该改成余26(对应z)，同时商减一。

```c
#include<stdio.h>
#include<string.h>
//高精度除法,la位s进制高精度数a,除以整型数b,结果保存到lc位高精度数c,返回余数
int div(int a[],int la,int s,int b,int c[],int*lc){
	int i,t=0;
	for(i=la-1;i>-1;i--){
		t*=s;
		t+=a[i];
		c[i]=t/b;
		t%=b;
	}
	while(la && c[la-1]<1)la--;
	*lc=la;
	return t;
}
//高精度减一，la位s进制高精度数a
void minusOne(int a[],int*la,int s){
	int i;
	a[0]--;
	for(i=0;i<(*la) && a[i]<0;i++){
		a[i]=s-1;
		a[i+1]--;
	}
	if(i==*la||!a[(*la)-1])	(*la)--;
}
int main(){
	int i,j,len,lc,ln;
	int num[40],chr[40],ans[40],a[40],la;
	char in[40];
	while(scanf("%s",in),in[0]!='*'){
		la=len=strlen(in);
		j=0;
		if(in[0]<60){	//is number
			ln=len;
			for(i=0;i<len;i++)
				a[i]=num[i]=in[len-1-i]-'0';
			while(la>0){
				chr[j]=div(a,la,10,26,a,&la);
				if(!chr[j]){
					chr[j]=26;
					minusOne(a,&la,10);
					if(la<0)la=0;
				}
				j++;
			}
			lc=j;
		}
		else{		//is character
			lc=len;
			for(i=0;i<len;i++)
				a[i]=chr[i]=in[len-1-i]-'a'+1;
			while(la){
				num[j++]=div(a,la,26,10,ans,&la);
				for(i=0;i<la;i++)	a[i]=ans[i];
			}
			ln=j;
		}

		for(i=0;i<lc;i++)
			printf("%c",chr[lc-1-i]+'a'-1);
		for(;lc<22;lc++)printf(" ");
		for(i=0;i<ln;i++){
			printf("%c",num[ln-1-i]+'0');
			if((ln-i-1)%3==0 && i<ln-1)printf(",");
		}
		printf("\n");
	}
	return 0;
}
```




---

### N - Number into Sequence

只需排列成类似下图的顺序

> $$
> \begin{align}
> &a\quad&&a\quad&&a\quad&&a\quad&&a\quad&a\\
> &&&&&b\quad&&b\quad&&b\quad&b\\
> &&&&&&&&&&c
> \end{align}
> $$

```c
#include<stdio.h>
#define MAX 100001
int main(){
	long long prime[10000]={};
	int primen=1;
	{
		int i,j;
		char a[MAX]={};
		for(i=2;i<MAX;i++){
			if(!a[i])
				prime[primen++]=i;
			for(j=1;j<primen&&prime[j]*i<MAX;j++)
				a[prime[j]*i]++;
		}
	}
	int t;
	scanf("%d",&t);
	while(t--){
		long long fact[30][2]={},i,n;
		scanf("%lld",&n);
		int j,factn=0;
		for(i=1;i<primen && prime[i]<=n;i++){
			int c=0;
			while(!(n%prime[i])){
				c++;
				n/=prime[i];
			}
			if(c){
				fact[factn][0]=prime[i];
				fact[factn][1]=c;
				factn++;
			}
		}
		if(i==primen){
			fact[factn][0]=n;
			fact[factn++][1]=1;
		}
		long long max=0,maxi,max0;
		for(i=0;i<factn;i++)
			if(fact[i][1]>max){
				max=fact[i][1];
				maxi=i;
				max0=fact[i][0];
			}
		printf("%d\n",max);
		for(i=0;i<max;i++){
			long long now=max0;
			for(j=0;j<factn;j++){
				if(j==maxi)continue;
				if(i+fact[j][1]>=max)
					now*=fact[j][0];
			}
			printf("%lld ",now);
		}
		printf("\n");
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

