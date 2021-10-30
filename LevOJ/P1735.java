import java.util.Scanner;
public class Main{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int t=in.nextInt();
		while(t-->0){
			int a=in.nextInt();
			int b=in.nextInt();
			int c=in.nextInt();
			int d=in.nextInt();
			int e=in.nextInt();
			int f=in.nextInt();
			if((float)b*d*f/a/c/e>1)
				System.out.println("Awesome!");
			else
				System.out.println("Stupid!");
		}
	}
}