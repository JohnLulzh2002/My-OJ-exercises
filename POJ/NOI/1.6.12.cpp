#include <stdio.h>
int main(){
    int n,a[50]={1},p,i=0,j;
    for(scanf("%d",&n);n>0;n--){
        p=0;
        for(j=0;j<=i;j++){
            p+=a[j]*2;
            a[j]=p % 10;
            p/=10;
        }
        a[j]=p;
        if(a[j]==0)i=j-1;
        else i=j;
    }
    for(;i>=0;i--)printf("%d",a[i]);
    return 0;
}
