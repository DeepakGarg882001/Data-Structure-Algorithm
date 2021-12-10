package Java.Patterns;

import java.util.Scanner;

public class Ptrn_14 {
    public static void main(String[] args) {
        System.out.print("please enter the value of N : ");
        Scanner sc= new Scanner(System.in);
        int N = sc.nextInt();

        for(int i=1;i<=N;i++){
            for(int j=1;j<=i;j++){
                System.out.print(" * ");
            }
            for(int k=(N-i);k>=1;k--){
                System.out.print("   ");
                System.out.print("   ");
            }
            for(int l=1;l<=i;l++){
                System.out.print(" * ");
            }
            System.out.println();
        }
        for(int m=1;m<=N;m++){
            for(int j=(N-m+1);j>=1;j--){
                System.out.print(" * ");
            }
            for(int k=(m-1);k>=1;k--){
                System.out.print("   ");
                System.out.print("   ");
            }
            for(int l=(N-m+1);l>=1;l--){
                System.out.print(" * ");
            }
            System.out.println();
        }
        sc.close();
    }
    
}
