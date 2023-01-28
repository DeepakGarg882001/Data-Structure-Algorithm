package Java.Function;

import java.util.Scanner;

public class Fn_7 {
    public static void main(String[] args) {
        System.out.print("Please enter the value of a :");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.print("Please enter the value of b :");
        int b = sc.nextInt();
        System.out.print("Please enter the value of c :");
        int c = sc.nextInt();

        isAverage(a,b,c);
        System.out.println(isAverage(a,b,c));
        sc.close();
    }
    public static int isAverage(int a,int b,int c) {
        int avg=(a+b+c)/3;
      return avg;
    }
}
