#include<iostream>
using namespace std;
void printArray(int Arr[],int size){
  for(int i=0; i<size;i++){
      cout<<Arr[i]<<" ";
  }
}
void reverseAlternate(int Arr[],int size){
    
       int start=0;
       int end=start+1;
       while(end<size){
           swap(Arr[start],Arr[end]);
           start=start+2;
           end=start+1;
       }
      
}
int main(){
    cout<<"Please enter the size of array : ";
    int size;
    cin>>size;
    int Arr[100];
    for(int i=0;i<size;i++){
      cout<<"Please enter the value of Arr["<<i<<"] : ";
      cin >> Arr[i];
    }

    reverseAlternate(Arr,size);
    cout<<" { ";
    printArray(Arr,size);
    cout<<" } ";

}