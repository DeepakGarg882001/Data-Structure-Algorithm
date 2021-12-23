#include<iostream>
using namespace std;
bool found(int Arr[],int search,int size){
    for(int k=0;k<size;k++){
      if(Arr[k]==search){
        return 1;
       }
    }
    return 0;
}
int main(){
    cout<<"please enter the size of Array : ";
    int size;
    cin>>size;
    int Arr[size];
    for(int i=0;i<size;i++){
        cout<<"please enter the value of Arr["<<i<<"] : ";
        cin>>Arr[i];
    }

    cout<<"Which value you want to search from above Array : ";
    int search;
    cin>>search;

    bool result= found(Arr,search,size);

    if(result){
        cout<<"Yes ,"<<search<<" is present in the above Array "<<endl;
    }else{
        cout<<"No ,"<<search<<" is not present in the above Array "<<endl;

    }

}
