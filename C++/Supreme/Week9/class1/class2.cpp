// create a class with some properties and behaviour
// also access them using object and modify value
// create a object in static Memory with private access


#include<iostream>
#include<string>
using namespace std;

// ek Animal name ki class bna le
class Animal{

    // state or Properties
     
     private:
     // animal ki age 
     int age;

     // animal ka weight
     int weight;

     // animal ka name
     string name;

      
      public:

     // getter and setters

       // for weight
       int getWeight(){
            return weight;
       } 

       void setWeight( int w ){
        weight = w;
       }
      
      // for age
      int getAge(){
        return age;
      }

      void setAge( int a){
         age = a;
      }

      //for name
      string getName(){
        return name;
      }

      void setName(string n){
        name = n;
      }

    // Behaviours or Functions
      
     // animal khana khata hai
     void eat(){
        cout<<"Kahana kha rha hu"<<endl;
     }
     
     // animal sota bi hai
     void sleep(){
       cout<<"Mai Soo rha hu"<<endl;
     }

     // animal chalta bi hai
     void walk(){
        cout<<"Mai Chal rha hu"<<endl;
     }

};

int main(){

    
    // create object

     // creating in static memory
     Animal cow;

     // print age of cow
     cout<<"Age of Animal is : "<<cow.getAge()<<endl;
    
     // print weight of cow
     cout<<"Weight of Animal is : "<<cow.getWeight()<<endl;

     // print name of cow
     cout<<"Name of Animal is : "<<cow.getName()<<endl;

       
    cout<<endl<<"Updating the details of Animal"<<endl;
     // set age of Animal = 7
     cow.setAge(7);

     // set weight of Animal = 89kg
     cow.setWeight(89);

     // set Name of Animal = Radha
     cow.setName("Radha");

     //Now print again

     
     // print age of cow
     cout<<"Age of Animal is : "<<cow.getAge()<<endl;
    
     // print weight of cow
     cout<<"Weight of Animal is : "<<cow.getWeight()<<endl;

     // print name of cow
     cout<<"Name of Animal is : "<<cow.getName()<<endl;
 
    
     // now call the functions of Animal

      // Animal Khana Kha le
      cow.eat();

      // Animal ab thoda walk krr le
      cow.walk();

      // Animal ab so ja
      cow.sleep();

return 0;
}