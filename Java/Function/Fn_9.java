package Java.Function;

import java.util.Scanner;

public class Fn_9 {
    public static void main(String[] args) {
        System.out.print("Please Enter the value of a : ");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.print("Please Enter the value of b : ");
        int b = sc.nextInt();
        isGreater(a,b);
        System.out.println(isGreater(a,b));
        sc.close();
    }
    public static String isGreater(int a,int b) {
        String result;
        if(a<b){
            result= " b is Greater than a";
        }else{
            result= " a is Greater than b";
        }
        return result;
    }
}
