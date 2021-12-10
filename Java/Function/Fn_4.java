package Java.Function;

import java.util.Scanner;

public class Fn_4 {
    public static void main(String[] args) {
        System.out.print("Please enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N= sc.nextInt();
        
        if(N<1){
                System.out.println(N+" is less than 1,please enter a greater value ");
                System.exit(0);
        }
        // check for prime 
        isPrime(N);
        
        System.out.println(N+" is a prime Number ");
        sc.close();

    }
    public static void isPrime(int n) {
        
        for(int i=2 ; i<n;i++){
            int remainder =n%i;
            int isDivisible=0;
            isDivisible= remainder+isDivisible;

            if(isDivisible == 0 ){
                System.out.println(n+" is not a prime number ");
                System.exit(0);
            }
        }
        
        
    }
}
