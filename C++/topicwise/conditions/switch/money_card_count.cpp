#include<iostream>
using namespace std;


int main(){
      
      int amount;
      cout << "Please Enter thr values of Amount :"<<endl;
      cin >> amount;

      while(amount!=0){
             
             int cards[11] = {2000,1000,500,200,100,50,20,10,5,2,1};
             int constValue = 0;
            for(int i=0;i<11;i++){
               if(amount>=cards[i]){
                constValue = cards[i];
               break;
               }
            }

          switch(constValue){
            
            case 2000: cout << "2000rs Money card will be : "<< amount/2000 <<endl;
                             amount = amount%2000;
                             break;
            
            case 1000: cout << "1000rs Money card will be : "<< amount/1000 <<endl;
                             amount = amount%1000;
                             break;
                             
            case 500: cout << "500rs Money card will be : "<< amount/500 <<endl;
                             amount = amount%500;
                             break;

            case 200: cout << "200rs Money card will be : "<< amount/200 <<endl;
                             amount = amount%200;
                             break;

            case 100: cout << "100rs Money card will be : "<< amount/100 <<endl;
                             amount = amount%100;
                             break;

            case 50: cout << "50rs Money card will be : "<< amount/50 <<endl;
                             amount = amount%50;
                             break;

            case 20: cout << "20rs Money card will be : "<< amount/20 <<endl;
                             amount = amount%20;
                             break;

            case 10: cout << "10rs Money card will be : "<< amount/10 <<endl;
                             amount = amount%10;
                             break;
                            
            case 5: cout << "5rs Money card will be : "<< amount/5 <<endl;
                             amount = amount%5;
                             break;
            
            case 2: cout << "2rs Money card will be : "<< amount/2 <<endl;
                             amount = amount%2;
                             break;
            
            case 1: cout << "1rs Money card will be : "<< amount/1 <<endl;
                             amount = amount%1;
                             break;

          }

      }
 

}