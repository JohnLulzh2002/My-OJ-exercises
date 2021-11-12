import java.util.Scanner;
public class Main{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int t=in.nextInt();
		while(t-->0){
			int n=in.nextInt(),max=0,
				maxl=0,maxr=0,b=0,l=1,i=0;
			while(n-->0){
				i++;
				b+=in.nextInt();
				if(b>max){
					max=b;
					maxl=l;
					maxr=i;
				}
				else if(b<0){
					b=0;
					l=i+1;
				}
			}
			System.out.printf("%d %d %d\n",max,maxl,maxr);
		}
	}
}