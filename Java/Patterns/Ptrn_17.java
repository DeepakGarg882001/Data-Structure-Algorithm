package Java.Patterns;

import java.util.Scanner;

public class Ptrn_17 {
    public static void main(String[] args) {
        System.out.print("Please Enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N= sc.nextInt();
        for(int i=1;i<=N;i++){
            for(int j=(N-i);j>=1;j--){
                System.out.print("   ");
            }
            for(int k=1;k<=N;k++){
                if(k ==1 || k==N || i==1 || i==N ){
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
