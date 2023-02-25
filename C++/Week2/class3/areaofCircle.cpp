// create a function which takes the radius of a circle as input and return area of circle

#include<iostream>
using namespace std;

float findArea(float r){
        
        int area = 3.14*r*r;

        return area;

}

int main(){
    float r;
    cout <<"Enter the Value of Radius of Circle : ";
    cin>>r;

   float area = findArea(r);
   cout <<"area of circle is : "<<area;

}
