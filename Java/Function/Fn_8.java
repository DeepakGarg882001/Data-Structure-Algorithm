package Java.Function;

import java.util.Scanner;

public class Fn_8 {
    public static void main(String[] args) {
        System.out.print("Please Enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        printSum(N);
        System.out.println(printSum(N));
        sc.close();
    }
    public static int printSum(int n) {
        int odd =0;
        for(int i=1;i<=n;i++){
            int mode=i%2;
            if(mode!=0){
                odd=i+odd;
            }
        }
        return odd; 
    }
}
