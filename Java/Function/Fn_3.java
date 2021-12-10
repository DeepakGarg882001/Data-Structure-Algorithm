package Java.Function;

import java.util.Scanner;

public class Fn_3 {
    public static void main(String[] args) {
        System.out.print("Please enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        facl(N);

        sc.close();

    }
    public static void facl(int n) {
        int result =1;
         negative(n);
         
        for(int i=n;i>=1; i--){
          result=i*result;
        }
        System.out.println(result);
            
    }
    public static void negative(int n){
        if(n<0){
            System.out.println("the given number is a negative");
            System.exit(0);
        }      
    }
}
