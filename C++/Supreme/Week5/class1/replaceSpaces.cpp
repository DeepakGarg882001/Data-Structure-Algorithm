// Write an Algorithm by which you can replace the given target character by given symbol character
// eg, taget character = space
//     given string = "Hello my name is Garg"
//     given Symbol = "@"
//     output = "Hello@my@name@is@Garg"
 
#include<iostream>
#include<string>
using namespace std;


void replaceTarget(char sentence[],char target,char symbol){

    int index=0;
    while(sentence[index]!='\0'){
      if(sentence[index]==target){
        sentence[index]=symbol;
      }
      index++;

    }

}

char getSymbol(){

      char symbol;
      cout <<"Enter the Replacing Symbol Character : ";
      cin >> symbol;

      return symbol;

}

char getTarget(){

       char target;
       cout<<"Enter the target character which you want to replace : ";
       cin>>target;

       return target;
}

int getStrLength( char sentence[] ){
     
     int index=0;
     while(sentence[index]!='\0'){
        index++;
     }

     return index;
}



int main(){
      
      char sentence[200];
      cout <<"Enter one line Sentence : ";
      cin.getline(sentence,200);

      int length = getStrLength(sentence);
      
      char target = getTarget();
      char symbol= getSymbol();


      replaceTarget(sentence,target,symbol);
      cout<<"Previous String : "<<sentence<<endl;

      cout<<"After replacement : "<<sentence<<endl;
      
      return 0;
}