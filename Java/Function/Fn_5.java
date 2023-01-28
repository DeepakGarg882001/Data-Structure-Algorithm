package Java.Function;

import java.util.Scanner;

public class Fn_5 {
    public static void main(String[] args) {
        System.out.print("Please enter the value of N :");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        
        isEven(N);
        System.out.println(N+" is a even number");
        sc.close();
    }

    public static void isEven(int n) {
        int remainder=n%2;
        if(remainder!=0 ){
            System.out.println(n+" is a odd number ");
            System.exit(0);
        }
    }
}
