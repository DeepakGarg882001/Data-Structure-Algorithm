package Java.Patterns;

import java.util.Scanner;

public class Ptrn_15 {
    public static void main(String[] args) {
        System.out.println("Please Enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        for(int i=1;i<=N;i++){
            for(int l=(N-i);l>=1;l--){
              System.out.print("   ");
            }
           for(int j=i;j>=1;j--){
              System.out.print(" * ");
           }
           for(int k=(i-1);k>=1;k--){
              System.out.print(" * ");
           }
           System.out.println();
        }
        for(int i=1;i<=N;i++){
            for(int l=(i-1);l>=1;l--){
              System.out.print("   ");
            }
           for(int j=(N-i+1);j>=1;j--){
              System.out.print(" * ");
           }
           for(int k=(N-i);k>=1;k--){
              System.out.print(" * ");
           }
           System.out.println();
        }
        sc.close();
    }
}
