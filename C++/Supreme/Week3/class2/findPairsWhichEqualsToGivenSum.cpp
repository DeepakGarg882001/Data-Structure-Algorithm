// you are given an Array in Input and a Interger value Sum .
// Find a Pair of Element using given array element whos sum is equal to Given Sum
// use a element only one time
// eg: arr[] = { 1,7,4,6,3,8,2,5}
//     sum = 9

// output: (1,8) -> 1+8 = 9  , order does not matter , (8,1) is also correct
//         (7,2) -> 7+2 = 9 
//         (5,4) -> 5+4 = 9 
//         (6,3) -> 6+3 = 9 

// Above all Four Options are correct , you can give any one of the pair as output


#include<iostream>
#include<vector>
using namespace std;


void printPairs( vector<int> &ans){
      
      for( int index=0; index<ans.size() ; index+=2 ){
        cout<<" ("<<ans[index]<<","<<ans[index+1]<<") ";
      } 

}

void findPairs( vector<int> &arr , int sum , vector<int> &ans ){
      
      // run outer loop
      for( int index=0 ; index<arr.size()-1 ; index++ ){
           
           // run inner loop
           for( int next = index+1 ; next<arr.size() ; next++ ){
              
              if( arr[index]+arr[next]==sum ){
                ans.push_back(arr[index]);
                ans.push_back(arr[next]);

                break;
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

    cout << "Enter the Size of Element : ";
    cin >> size;

    // create a vector
    vector<int> arr(size);

    //takeInput
    takeInput(arr);
     

    // take sum from user
    int sum = takeSum();
  
    // create a vector to store pairs
    vector<int> ans;

    // find pairs
    findPairs(arr,sum,ans);
      
    if(ans.size()==0){
        cout<<"No Pair Found"<<endl;
    }
    else{
     // print pairs
     printPairs(ans);
    }
    
    return 0;
}