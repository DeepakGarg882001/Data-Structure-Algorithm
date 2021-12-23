package Java.Function;

import java.util.Scanner;

public class Fn_10 {
    public static void main(String[] args) {
        System.out.print("Please Enter the value of radius r : ");
        Scanner sc = new Scanner(System.in);
        float r=sc.nextFloat();
        circumference(r);
        System.out.println(circumference(r));
        sc.close();
    }
    public static float circumference(float r) {
        float ans= 2*(22/7)*r;
        return ans;
        
    }
}
