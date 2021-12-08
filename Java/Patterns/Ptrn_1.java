package Java.Patterns;
import java.util.*;
public class Ptrn_1{
    public static void main(String[] args ){
        System.out.print("Please enter the value of n : ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
          
        for(int i=1;i<=N;i++){
            for(int j=1; j<=(N+1);j++){
              System.out.print(" * ");
            }
            System.out.println();
        }
        sc.close();
    }
}