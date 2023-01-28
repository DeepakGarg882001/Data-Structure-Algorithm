package Java.Patterns;

import java.util.Scanner;

public class Ptrn_12 {
    public static void main(String[] args) {
        System.out.print("Please enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int count=1;
        for(int i=1; i<=N;i++){
            for(int k=(N-i);k>=1;k--){
                System.out.print(" ");
            }
            for(int j=1; j<=i;j++){
              System.out.print(count+" ");
            }
            count++;
            System.out.println();

        }
        sc.close();
    }
    
}
