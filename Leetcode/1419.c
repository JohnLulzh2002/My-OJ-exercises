int f(char c){
	switch(c){
	case'c':
		return 0;
	case'r':
		return 1;
	case'o':
		return 2;
	case'a':
		return 3;
	case'k':
		return 4;
	}
	return 5;
}
int minNumberOfFrogs(char* croakOfFrogs){
	int a[5]={},r,s=0;
	for(;*croakOfFrogs;croakOfFrogs++){
		r=f(*croakOfFrogs);
		if(!r){
			if(a[4])a[4]--;
			a[0]++;
		}else if(r<5&&a[r-1]){
			a[r-1]--;
			a[r]++;
		}else
			return -1;
	}
	if(a[4]&&!(a[0]+a[1]+a[2]+a[3]))
		return a[4];
	else
		return -1;
}