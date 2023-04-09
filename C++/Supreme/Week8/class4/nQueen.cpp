// Leetcode Ques : 51

// The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

// Given an integer n, return all distinct solutions to the n-queens puzzle. You may return the answer in any order.

// Each solution contains a distinct board configuration of the n-queens' placement, where 'Q' and '.' both indicate a queen and an empty space, respectively.

 

// Example 1:


// Input: n = 4
// Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
// Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above
// Example 2:

// Input: n = 1
// Output: [["Q"]]
 

// Constraints:

// 1 <= n <= 9


#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;


unordered_map<int,bool> leftRow;
unordered_map<int,bool> leftUpperDiagonal;
unordered_map<int,bool> leftDownDiagonal;

void printAns( vector<vector<string>> &ans ){
      
      //total rows( number of solution)
      int row = ans.size();

      // number of column in each solution
      int col = ans[0].size();
      
      // print solution
      for(int i=0; i<row; i++){
         
         // inner loop
         for(int j=0; j<col; j++){
            cout<<ans[i][j]<<endl;
         }
         cout<<endl<<endl;

      }

}

void copySolution( vector<vector<char>> &arr , int &totalQueen , vector<vector<string>> &ans ){
      
    // temp string vector
    vector<string> temp;
    
    // run a loop
    for(int row=0; row<totalQueen; row++){
         
         //create temp string
         string output;


         // inner loop
         for(int col =0; col<totalQueen; col++){
            
            output.push_back(arr[row][col]);
            output.push_back(' ');

         }

         // now copy this to ans
         temp.push_back(output);
    }
 
   ans.push_back(temp);
}


bool isCellSafe( int &row, int &col, int &totalQueen ){
    
    // step1
    if( (row<0 || row>=totalQueen) || ( col<0 || col>=totalQueen ) ){
      return false;
    }
    
    // step2 -> left row check
    if(leftRow[row]==true){
        return false;
    }

    // step3 -> left Upper Diagonal Check
    if(leftUpperDiagonal[totalQueen-1+col-row]==true){
        return false;
    }

    // step4  -> left Down Diagonal check
    if(leftDownDiagonal[row+col]==true){
        return false;
    }
    
    return true;
}

void placeQueen( vector<vector<char>> &arr,  int col, int &totalQueen, vector<vector<string>> &ans){
      
     // base condition
     if(col>=totalQueen){
         
         // now copy this solution into ans 
         copySolution(arr,totalQueen,ans);

        return;
     }

     //processing

     for(int row=0 ; row<totalQueen; row++ ){
          
          // kya ye cell safe hai?
          if(isCellSafe(row,col,totalQueen)){
              
              arr[row][col]='Q';
             
              // add values in map
              leftRow[row]= true;

              leftUpperDiagonal[totalQueen-1+col-row] = true;

              leftDownDiagonal[row+col] = true;

              // place Queen in next col
              placeQueen( arr,col+1, totalQueen,ans);
              
              // after backTraking
            
              arr[row][col]='-';
             
              // add values in map
              leftRow[row]= false;

              leftUpperDiagonal[totalQueen-1+col-row] = false;

              leftDownDiagonal[row+col] = false;

          }

     }


}


int main(){
    
    // number of Queens
    int totalQueen;

    cout<<"Enter the Total Number of Queens : ";
    cin>> totalQueen;

    // create a 2D vector of N*N
    vector<vector<char>> arr( totalQueen , vector<char> (totalQueen , '-' ) );

    // store ans
    vector<vector<string>> ans;
      
    // store row and col
    int row = 0;
    int col = 0;

    // place queen one by one
      placeQueen(arr, col, totalQueen, ans);

    // print ans
    printAns(ans);
 
 return 0;
}
