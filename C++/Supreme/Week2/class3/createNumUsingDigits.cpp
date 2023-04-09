  // create a Number using the digit taken as a Input from user

  #include<iostream>
  using namespace std;
  
  int takeInput(){
      int value;
      cout <<"Enter the value of digit : ";
      cin >> value;
      return value;
  }

  int createNumber(int digits){
      int number=0;
      for(int index=0;index<digits;index++){
           
           int num = takeInput();
           number = (number*10) + num;
      }
      return number;
  }

  int main(){

    int digits;
    cout << "Enter the Total Number of digits : ";
    cin >> digits;

    int number = createNumber(digits);
    cout << "The Number is : "<< number;
  
      
  }