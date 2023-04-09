// create a object in Heap memory

#include<iostream>
using namespace std;

class Animal{
        public:
         
        // state
          int age;

          int weight;

        // behaviour 
         
         // getter and setter
        

        void sleep(){
            cout<<"Bhai mai Soo rha hu"<<endl;
        }

        void eat(){
            cout<<"Bhai mai khana kha rha hu"<<endl;
        }

};

int main(){
 
     // create a object dynamicaly
     Animal*cow= new Animal;
        
     (*cow).age=20;
     cout<<(*cow).age<<endl;
      (*cow).eat();

}