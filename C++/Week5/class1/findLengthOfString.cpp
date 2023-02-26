// Write a Algorithm by which you can find out Lenght of given string;
// eg,  "hello garg" => 10


#include<iostream>
#include<string>
using namespace std;

int getStrLength( char name[] ){
          
           int count=0;
           int index=0;
           while(name[index]!='\0'){
             index++;
             count++;
           }
 return count;
}

int main(){
    
    char name[100];
    cout<<"Enter your full name : ";
    cin.getline(name,100);

    int length = getStrLength(name);
    
    cout <<"Length of Name Sting is  : "<<length<<endl;

}