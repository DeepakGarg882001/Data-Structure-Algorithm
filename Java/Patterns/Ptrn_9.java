package Java.Patterns;
import java.util.Scanner;


public class Ptrn_9 {
    public static void main(String[] args) {
        System.out.print("Please enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        for(int i=1;i<=N;i++){
            int k=i;
            int number=0;
            int x=0;
            while(k!=0){
                int digit =(k&1);
                number = (int) ((digit* Math.pow(10,x))+number);
                k=k>>1;
                x++;

            }
            System.out.println(number);
        } 
        sc.close();
    }
    
}
