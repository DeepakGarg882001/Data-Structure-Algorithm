package Java.Function;

import java.util.Scanner;

public class Fn_11 {
    public static void main(String[] args) {
        System.out.print("Please enter your age : ");
        Scanner sc= new Scanner(System.in);
        int age= sc.nextInt();
        if(age<=0){
            System.out.println("Please Enter a valid age !");
            System.exit(0);
        }
        isEligible(age);
        sc.close();
    }
    public static void isEligible(int n) {
          if(n>=18){
              System.out.println("Yes, you are Eligible for Vote ");
          }else{
              System.out.println("No, you are not Eligible for Vote ");
          }
    }
}
