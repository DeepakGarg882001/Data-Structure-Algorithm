// Print a Solid Half Diamond whith the help of loops
// eg:

//  *
//    *
//  *   *
//    *   *
//  *   *   *
//    *   *   *
//  *   *   *
//    *   *
//  *   *
//    *
//  *


#include <iostream>
using namespace std;

int main()
{

    int row;
    // int col;

    cout << "Enter the Number of Rows : ";
    cin >> row;

    // cout << "Enter the Number of Columns : ";
    // cin >> col;

    for (int rowNumber = 0; rowNumber < row; rowNumber++)
    {
          if(rowNumber&1 == 1){
              for(int col =0; col< rowNumber+2; col++){

                if(col&1==1 || col==0){
                    cout << " ";
                }else{
                    cout<<" * ";
                }
             }
              
          }else{
             
             
            for(int col =0; col<rowNumber+1; col++){
                   
                   if(col&1 == 1){
                    cout << " ";
                   }else{
                    cout << " * ";
                   }

              }

          }
          cout << endl;


    }

     for(int rowNum =0; rowNum<row-1;rowNum++){
           
           if(rowNum&1 == 1){
             for(int col = 0; col<row-rowNum;col++){
                if(col&1 ==1 || col==0){
                    cout << " ";
                }else{
                    cout <<" * ";
                }
             }
           
           }else{
            for(int col =0; col< row-rowNum-1;col++){
              if(col&1==1){
                cout <<" ";
              }else{
                cout << " * ";
              }
            }
           }
        cout << endl;
     }
}