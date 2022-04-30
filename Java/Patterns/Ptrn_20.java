package Java.Patterns;

import java.util.Scanner;

public class Ptrn_20 {
    // Uncomplete
    public static void main(String[] args) {
        System.out.print("Please enter the value of N : ");
        Scanner sc = new Scanner(System.in);
        int N= sc.nextInt();

        for(int i =1;i<=N;i++){
            for(int j=1;j<=i;j++){
                 if(j==1||j==i){
                     System.out.print(1);
                 }else{
                    //  int x=i-1;
                    //  int y=j-1;
                    //  int a;
                    //  int b;
                    //  if(y==1){
                    //      a=1;
                    //  }

                    //  System.out.print(a+b);
                 }
            }
            System.out.println();
        }
        sc.close();
    }
}
