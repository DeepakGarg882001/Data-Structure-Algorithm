// you are given an Array in Input and a Interger value Sum .
// Find a Triplet of Element using given array element whos sum is equal to Given Sum
// use a element only one time
// eg: arr[] = { 1,7,4,6,3,8,2,5}
//     sum = 9

// output: (1,6,2) -> 1+6+2 = 9  , order does not matter , (6,2,1) is also correct
//         (4,3,2) -> 4+3+2 = 9 
//         (5,3,1) -> 5+3+1 = 9 

// Above all Three Options are correct , you can give any one of the triplet as output


#include<iostream>
#include<vector>
using namespace std;

void  printTriplet( vector<int> &ans ){

        for( int index=0; index<ans.size() ; index+=3 ){
        cout<<" ("<<ans[index]<<","<<ans[index+1]<<","<<ans[index+2]<<") ";
      }

}

void findTriplet( vector<int> &arr , int &sum , vector<int> &ans ){
      
      // run loop 1
      for(int round =0; round<arr.size()-2; round++){
           
           // run loop 2
           for(int mid = round+1; mid<arr.size()-1 ; mid++ ){
                 
                 // run loop 3
                 for(int index=mid+1; index<arr.size(); index++){
                    if(arr[round]+arr[mid]+arr[index]==sum){
                        ans.push_back(arr[round]);
                        ans.push_back(arr[mid]);
                        ans.push_back(arr[index]);
                        break;
                    }
                 }

           }

      }

}

int takeSum(){
     
     int sum;
     cout <<"Enter the value of Sum : ";
     cin >> sum;

     return sum;

}


void takeInput(vector<int> &arr){
        
        for( int index=0; index<arr.size(); index++ ){

               cout<<"Enter the value of Arr[ "<<index<<" ] : ";
               cin>>arr[index];             

        }

}

int main(){

      int size;
      cout<<"Enter the size of Array : ";
      cin >> size;

      // create a vector of this size;
      vector<int> arr(size);

      // takeInput from user
       takeInput(arr);

      // get sum from user
      int sum = takeSum();
       
      // create a vector to store tiplets
      vector<int> ans;

      // find Triplets
      findTriplet(arr,sum,ans);

      if(ans.size()==0){
        cout<<"NO Triplet Found"<<endl;
      }
      else{
        printTriplet(ans);
      }

      return 0;
}