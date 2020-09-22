#include<stdio.h>
int main(){
 char a[31],i,o;
 int n=0;
 scanf("%s %c %c",a,&i,&o);
 while(a[n]!='\0'){
  if(a[n]==i)a[n]=o;
  n++;
 }
 printf("%s",a);
 return 0;
}
