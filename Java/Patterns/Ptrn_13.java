package Java.Patterns;

import java.util.Scanner;

public class Ptrn_13 {
    public static void main(String[] args) {
        System.out.print("Please enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int i= 1;i<=N;i++){
            for(int l=(N-i);l>=1;l--){
                System.out.print("  ");
            }
            for(int j=i;j>=1;j--){
                System.out.print(j+" ");
            }
            for(int k=1;k<i;k++){
                System.out.print((k+1)+" ");
            }
            System.out.println();
        }
        sc.close();
    }
    
}
