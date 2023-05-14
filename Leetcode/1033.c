int* numMovesStones(int a,int b,int c,int* returnSize){
	*returnSize=2;
	int*ans=(int*)malloc(sizeof(int)*2);
	if(a>b){a+=b;b=a-b;a-=b;}
	if(a>c){a+=c;c=a-c;a-=c;}
	if(b>c){b+=c;c=b-c;b-=c;}
	a=b-a;
	b=c-b;
	if(a+b<3){ans[0]=0;ans[1]=0;}
	else if(a<3||b<3){ans[0]=1;ans[1]=a+b-2;}
	else{ans[0]=2;ans[1]=a+b-2;}
	return ans;
}