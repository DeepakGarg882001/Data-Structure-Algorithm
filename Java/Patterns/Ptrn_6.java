package Java.Patterns;

import java.util.Scanner;

public class Ptrn_6 {
        public static void main(String[] args) {
            System.out.print("Please enter the value of N : ");
            Scanner sc= new Scanner(System.in);
            int N = sc.nextInt();

            for(int i=1; i<=N;i++){
                for(int j=1;j<=i;j++){
                    System.out.print(" "+j);

                }
                System.out.println();
            }
            sc.close();
        }
    
}
