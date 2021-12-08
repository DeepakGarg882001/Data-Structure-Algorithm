package Java.Patterns;

import java.util.Scanner;

public class Ptrn_8 {
    public static void main(String[] args) {
        System.out.print("Please Enter The value of N : ");
        Scanner sc = new Scanner(System.in);
        int N= sc.nextInt();
        int c=1;
        for(int i=1;i<=N;i++){
           
            for(int j=1;j<=i;j++){
                System.out.print(c+" ");
                c++;
            }
            System.out.println();
        }
        sc.close();
    }
    
}
