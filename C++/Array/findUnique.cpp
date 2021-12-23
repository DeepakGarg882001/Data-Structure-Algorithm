#include<iostream>
using namespace std;
// uncomplite
int main(){
    cout<<"Please enter the value of size of array : ";
    int size;
    cin>>size;
    int Arr[100];
    for(int i=0;i<size;i++){
      cout<<"Please enter the value of Arr["<<i<<"] : ";
      cin >> Arr[i];
    }
     int isunique =0;
     int digit=0;
    for(int i=0;i<size;i++){
        Arr[i];
        for(int j=0;j<size;j++){
            if(j==i){
               continue;
            }else{
              if(Arr[i]==Arr[j]){
                isunique++;
              }else{
                continue;
               }
               
            }
        } if(isunique==0){
                 digit=Arr[i];
                } 
    }
    cout<<endl<<endl;
    cout <<"the unique value from above Array is : "<<digit<<endl;
}