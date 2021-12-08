package Java.Patterns;

import java.util.Scanner;

public class Ptrn_10 {
    public static void main(String[] args) {
        System.out.print("Please Enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int i=1;i<=N;i++){
            for(int j =i;j>=1;j--){
                if(j%2!=0){
                    System.out.print("1 ");
                }else{
                    System.out.print("0 ");
                }   
            }
            System.out.println();
        }
        sc.close();
    }
    
}
