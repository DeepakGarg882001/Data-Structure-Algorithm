package Java.Function;

import java.util.Scanner;

public class Fn_12 {
    // uncomplete 
    public static void main(String[] args) {
        System.out.println("In the below , \nYou have to give input as much time as you want & any number which you want ");
    Scanner sc=new Scanner(System.in);
    
    askForInput(sc);
    System.out.println(" times you have entered the Positive Number");
    sc.close();
    }
    public static void askForInput(Scanner sc) {
        System.out.print("Do you want to Enter any number \n yes(Y) ,no (N) : ");
        String Yes_no =sc.next();

          if( Yes_no.equals("Y")){
               enterInput(sc);
          }else{
              return; 
          } 
    }
    public static void enterInput(Scanner sc) {
        System.out.print("Please Enter any number : ");
        int num=sc.nextInt();
        if(num<0){
           
        }else if(num>0){
        
         
        }else{
           
        }
        askForInput(sc);
    }
    
}
