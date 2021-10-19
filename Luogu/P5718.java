import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a,n,min=2000;
        n=in.nextInt();
        while((n--)>0){
            a=in.nextInt();
            if(a<min)
                min=a;
        }
        System.out.print(min);
        in.close();
    }
}