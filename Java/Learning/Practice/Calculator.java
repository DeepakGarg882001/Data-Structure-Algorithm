package Java.Learning.Practice;
import java.util.*;
class Calculator{
    public static void main(String[] args){

          System.out.println("Hi , Welcome  Here you can easily do your Calculation :) ");

          Scanner sc = new Scanner(System.in);
          System.out.print("Please Enter The value of a :");
          float a =  sc.nextFloat();
          
          System.out.println("Which operation you want to Perform \n Addition(+) , Subtraction(-),Multiplication(*), Division(/),Modulas(%) : ");
          String oprtn = sc.next();

          System.out.print("Please Enter the value of b : ");
          float b = sc.nextFloat();

          switch(oprtn){
              case "+" : System.out.println("The addition of "+ a +" + "+ b +" is : "+(a+b) ); 
                         break;

              case "-" : System.out.println("The Subtraction of "+ a +" - "+ b +" is : "+(a-b) ); 
                         break; 
              
              case "*" : System.out.println("The Multiplication of "+ a +" * "+ b +" is : "+(a*b) ); 
                         break;
                         
              case "/" : System.out.println("The Division of "+ a +" / "+ b +" is : "+(a/b) ); 
                         break;
              
              case "%" : System.out.println("The Modulas of "+ a +" % "+ b +" is : "+(a%b) ); 
                         break;
                                  
          }


          sc.close();
    }
}