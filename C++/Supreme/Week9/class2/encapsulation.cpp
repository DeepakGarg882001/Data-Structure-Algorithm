// What is Encapsulation
// Write a Program of Perfect encapsulation


// Encapsulation means to hide the data, we can easily hide the data from user by using the Class.

// A Perfect Encapsulation is that , in which whole the data is shared as Private


#include<iostream>
#include<string>
using namespace std;

// create a class
class car{
      
      private:
     
      int tyres;
      int seats;
      string name;
      string category;
       
       public:
    

     // make getter and setter fn

     public:
      
      // for tyres
      int getTyres(){
        return this->tyres;
      }
      
      void setTyres( int value ){
        this->tyres = value;
      }


      // for seats
      int getSeats(){
        return this->seats;
      }

      void setSeats( int num ){
        this->seats = num;
      }
     

      // for name
      string getName(){
        return this->name;
      }
      
      void setName( string name ){
        this->name = name;
      }
     
      
      // for categories
      string getCategories(){
        return this->category;
      }

      void setCategory( string catagory){
         this->category = catagory;
      }
};

int main(){

      // create a object of car data-type
      car tata;
       
      cout<<"Initial Values of Car"<<endl; 
      cout<<"Car name : "<<tata.getName()<<endl;       
      cout<<"Car Category :"<<tata.getCategories()<<endl;       
      cout<<"Number of tyres : "<<tata.getTyres()<<endl;       
      cout<<"Number of Seats : "<<tata.getSeats()<<endl;       


}
