import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt(),m=0;
        for(;n>0;n--){
            int a=s.nextInt();
            if(a>m)
                m=a;
        }
        System.out.println(m);
    }
}