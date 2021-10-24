import java.util.Scanner;
public class Main{
	public static void main(String[] args) {
		Scanner in=new Scanner(System.in);
		int x=in.nextInt();
		in.close();
		boolean a=x%2==0,b=x>4&&x<=12;
		if(a)
			if(b)
				System.out.print("1 1 0 0");
			else
				System.out.print("0 1 1 0");
		else
			if(b)
				System.out.print("0 1 1 0");
			else
				System.out.print("0 0 0 1");
	}
}