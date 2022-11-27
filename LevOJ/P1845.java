import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		int a1=s.nextInt(),
			b1=s.nextInt(),
			a2=s.nextInt(),
			b2=s.nextInt(),
			a3=s.nextInt(),
			b3=s.nextInt(),
			a4=s.nextInt(),
			b4=s.nextInt(),
			a5=s.nextInt(),
			b5=s.nextInt(),
			a6=s.nextInt(),
			b6=s.nextInt(),
			x=s.nextInt(),
			y=s.nextInt(),
			r=s.nextInt();
		if((a1-x)*(a1-x)+(b1-y)*(b1-y)<r*r)
			System.out.println("Advanced Mathematics");
		else if((a2-x)*(a2-x)+(b2-y)*(b2-y)<r*r)
			System.out.println("Data Structure");
		else if((a3-x)*(a3-x)+(b3-y)*(b3-y)<r*r)
			System.out.println("Data Structure");
		else if((a4-x)*(a4-x)+(b4-y)*(b4-y)<r*r)
			System.out.println("Organic Chemistry");
		else if((a5-x)*(a5-x)+(b5-y)*(b5-y)<r*r)
			System.out.println("Organic Chemistry");
		else if((a6-x)*(a6-x)+(b6-y)*(b6-y)<r*r)
			System.out.println("Organic Chemistry");
			else
			System.out.println("What a pity.");
	}
}