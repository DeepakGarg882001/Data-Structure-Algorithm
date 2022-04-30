package Java.Function;

import java.util.Scanner;

public class Fn_6 {
    public static void main(String[] args) {
        System.out.print("Please enter the value of N :");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        System.out.print(" upto where you want to print the Table : ");
        int M =sc.nextInt();
        printTable(N,M);
        sc.close();
    }
    public static void printTable(int n,int m) {
        for(int i=1;i<=m;i++){
            System.out.println(n+" * "+i+" = "+(n*i));
        }
        
    }
}
