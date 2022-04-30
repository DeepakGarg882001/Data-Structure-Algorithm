package Java.Patterns;

import java.util.Scanner;

public class Ptrn_11 {
    public static void main(String[] args) {
        System.out.print("Please Enter the value of N : ");
        Scanner sc =new Scanner(System.in);
        int N = sc.nextInt();

        for(int i=1;i<=N;i++){
            for(int k=(N-i);k>=1;k--){
                System.out.print("   ");
            }
            for(int j=1; j<=N;j++){
                System.out.print(" * ");
            }
            System.out.println();
        }
        sc.close();
  

    }
    
}
