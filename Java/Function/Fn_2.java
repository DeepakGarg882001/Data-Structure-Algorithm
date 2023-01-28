package Java.Function;

import java.util.Scanner;

public class Fn_2 {
    public static void main(String[] args) {
        System.out.print("Please enter the value of a : ");
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();

        System.out.print("Please enter the value of b : ");
        int b=sc.nextInt();

        mult(a,b);
        sc.close();
    }
    public static void mult(int x,int y) {
               int mult=x*y;
               System.out.println(mult);
    }
}
