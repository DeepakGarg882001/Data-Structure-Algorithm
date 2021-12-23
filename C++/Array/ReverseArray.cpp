#include<iostream>
using namespace std;
void printArray(int Arr[],int size){
   for(int i=0;i<size;i++){
       cout<<Arr[i]<<" ";
   }
}
void reverseArray(int Arr[],int size){
     int start=0;
     int end=size-1;
     while(start<=end){
        swap(Arr[start],Arr[end]);
        start++;
        end--;
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

    reverseArray(Arr,size);
    cout<<"{ ";
    printArray(Arr,size);
     cout<<" } ";
}    