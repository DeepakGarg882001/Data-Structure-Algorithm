// create a function which takes the radius of a circle as input and return area of circle

#include<iostream>
using namespace std;

int findArea(int r){
        
        int area = 2*3.14*r;

        return area;

}

int main(){
    int r;
    cout <<"Enter the Value of Radius of Circle : ";
    cin>>r;

   int area = findArea(r);
   cout <<"area of circle is : "<<area;

}
