package Java.Patterns;

import java.util.Scanner;

public class Ptrn_16 {
    public static void main(String[] args) {
        System.out.print("Please Enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N= sc.nextInt();
      
        //  upper part
        for(int i=1;i<=N;i++){
             for(int j=1;j<=i;j++){
                if(j == i || j==1){
                    System.out.print(" * ");
                }else{
                    System.out.print("   ");
                }
             }
             for(int k=2*(N-i);k>=1;k--){
                 System.out.print("   ");
             }
             for(int l=1;l<=i;l++){
                if(l == i || l==1){
                    System.out.print(" * ");
                }else{
                    System.out.print("   ");
                }
             }
             System.out.println();
        }

        // Lower part
        for(int i=1;i<=N;i++){
            for(int j=(N-i+1);j>=1;j--){
               if(j == (N-i+1) || j==1){
                   System.out.print(" * ");
               }else{
                   System.out.print("   ");
               }
            }
            for(int k=2*(i-1);k>=1;k--){
                System.out.print("   ");
            }
            for(int l=(N-i+1);l>=1;l--){
               if(l == (N-i+1) || l==1){
                   System.out.print(" * ");
               }else{
                   System.out.print("   ");
               }
            }
            System.out.println();
       }
        sc.close();

    }
    
}
