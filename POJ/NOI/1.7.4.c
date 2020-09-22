#include<stdio.h>
int main(){
	int n;
	char s1[9],s2[9];
	scanf("%d",&n);
	while(n>0){
		scanf("%s %s",s1,s2);
		switch(s1[0]){
			case 'R':
				switch(s2[0]){
					case 'R':
						printf("Tie\n");
						break;
					case 'S':
						printf("Player1\n");
						break;
					case 'P':
						printf("Player2\n");
						break;
				}
				break;
			case 'S':
				switch(s2[0]){
					case 'S':
						printf("Tie\n");
						break;
					case 'P':
						printf("Player1\n");
						break;
					case 'R':
						printf("Player2\n");
						break;
				}
				break;
			case 'P':
				switch(s2[0]){
					case 'P':
						printf("Tie\n");
						break;
					case 'R':
						printf("Player1\n");
						break;
					case 'S':
						printf("Player2\n");
						break;
				}
				break;
		}
		n--;
	}
	return 0;
}
