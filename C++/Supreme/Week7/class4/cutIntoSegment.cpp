// You are given an integer N, which shows the Length of a Rod(iron stick);
// You are given 3 Inputs X,Y,Z which shows the length
// Find the Maximum Number of Segments that you can make by dividing the rod into X,Y,Z length

// eg: N = 7
//     x = 5
//     y = 2
//     z = 2

// output: 5+2 = 7 , max 2 elements are required


#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

int findMaxSegment( int n , int &x , int &y , int &z ){
    
    // base condition 1
    if(n==0){
        return 0;
    }

    // base condition 2
    if(n<0){
        return INT_MIN;
    }
    
    int ans = INT_MIN;

    // recursive call

    // x mai divide kro
    ans = max( ans , findMaxSegment(n-x, x,y,z) );
   
    // y mai divide kro
    ans = max( ans , findMaxSegment(n-y, x,y,z) );

    // z mai divide kro
    ans = max( ans , findMaxSegment(n-z, x,y,z) );
  
    return ans!=INT_MIN ? ans+1 : ans;
}

int main(){
      
      int N;
      cout<<"Enter the value of N : ";
      cin>>N;

      int x,y,z;

      cout<<"Enter the value of X : ";
      cin >>x;

      cout<<"Enter the value of Y : ";
      cin >>y;

      cout<<"Enter the value of Z : ";
      cin >>z;
       
       // find max segment
       int maxSeg = findMaxSegment(N,x,y,z);

       cout<<"Max segments are : "<<maxSeg<<endl;

}
