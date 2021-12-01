import java.util.*;
public class Sum {
    
    public static void main(String[] args ){
        System.out.println("Please Enter the value of a : ");
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.println("Please Enter the value of b : ");
        int b = sc.nextInt();
        int sum = a+b;
        System.out.print("The sum of a & b will be : ");
        System.out.print(sum);

        sc.close();

    }
}
