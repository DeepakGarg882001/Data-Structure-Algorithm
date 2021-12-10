package Java.Function;

import java.util.Scanner;

public class Fn_1 {
    public static void main(String[] args) {
        System.out.print("Please enter the value of a : ");
        Scanner sc = new Scanner(System.in);
        int a=sc.nextInt();

        System.out.print("Please enter the value of b : ");
        int b=sc.nextInt();

        sum(a,b);
        sc.close();
    }
    
    public static void sum(int x,int s) {
        int sum= x+s;
        System.out.println(sum); 
    }
    
}
