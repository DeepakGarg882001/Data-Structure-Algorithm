// You have to take input( 0 , 1 ) from user upto N into an Array , Then count Number of Zero and One.
// eg:  arr[]={0,1,0,0,0,1,1,0,0,1,0,1,1,0}
// output:  0 -> 7, 1 -> 6
//

#include<iostream>
#include<vector>
using namespace std;

 void countNums(vector<int>&arr){
      
      int size=arr.size();

      int zero=0;
      int one=0;

      for(int index=0;index<size;index++){
         if(arr[index]==0){
            zero++;
         }else{
            one++;
         }
      }
   
       cout <<"Number of Zeros are : "<<zero<<endl;
       cout << "Number of One's are : "<<one<<endl;


 }

void takeInput(vector<int>&arr){
     
     int size = arr.size();

     for(int index=0; index<size;index++){
        cout << "Enter the value of Arr[ "<<index<<" ] : ";
        cin>>arr[index];
     }

}

int main(){
 
  // take vector size from user
   int size;
   cout << "Enter the Size of Array : ";
   cin>>size;
   
   // declare a vector
   vector<int> arr(size);
   
   //Note: only enter 0 and 1
   cout <<"Enter only 0 or 1"<<endl;
   // take input from user
   takeInput(arr);

   // count 0 and 1
   countNums(arr);
 
 return 0;
}