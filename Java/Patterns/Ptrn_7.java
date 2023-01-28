package Java.Patterns;

import java.util.Scanner;

public class Ptrn_7 {
    public static void main(String[] args) {
        System.out.print("please Enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        for(int i=1;i<=N;i++){
            for(int j=1;j<=(N-i+1);j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
        sc.close();
    }
    
}
