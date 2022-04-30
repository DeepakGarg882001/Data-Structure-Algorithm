#include <iostream>
using namespace std;

void reverseArray(int size , int Arr[]){
  int start=0;
  int end=size-1;
  while(start<=end){
  swap(Arr[start], Arr[end]);
  start++;
  end--;

  }
}

void printResult(int size , int Arr[]){
    cout <<"Array is : { ";
    for(int i=0;i<size;i++){
        cout << Arr[i]<<"  ";
    }
 
  cout <<"}"<<endl;
}

int main(){
  
  int size;
  cout<<"Please enter the value of N (size of array) :";
  cin>>size;
  int Arr[10]={0};
  for(int i=0;i<size;i++){
      cout<<"Please Enter the value of Arr["<<i <<"] : ";
      cin >>Arr[i];
  }
 

 reverseArray(size,Arr);

 printResult(size,Arr);

}
