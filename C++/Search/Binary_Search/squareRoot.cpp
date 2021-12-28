#include<iostream>
using namespace std;

double decimalvalue(int tempSol,int num){
    double Factor =1;
    int digits=4; 
    double ans=tempSol;
    for(int i =0;i<digits;i++){
        Factor=Factor/10;

        for(double j=ans;j*j<num;j=ans+Factor){
            ans=j;
        }
    }
    return ans;
}

int sqRootfn(int Arr[],int num){
    int start=0;
    int end= num-1;
    int mid= start+((end-start)/2);
    int sqRt=(Arr[mid]*Arr[mid]);
    while(start<=end){
        if(sqRt==num){
            return Arr[mid];
        }else{
            if(sqRt<num){
                if( (Arr[mid+1]*Arr[mid+1]) > num ){
                    return Arr[mid+1];
                }else{
                    start=mid+1;
                }
            }else{
                if( (Arr[mid-1]*Arr[mid-1]) < num){
                    return Arr[mid-1]; 
                }else{
                    end=mid-1;
                }
            }
        }
        mid= start+((end-start)/2);
    }
    return -1;
}

int main(){
    cout<<"please enter the number of which\n you want to find out the square root : ";
    int num;
    cin>>num;
     
    int Arr[100];
    for(int i=0;i<num;i++){
        Arr[i]=i;
    }

    int sqRoot=  sqRootfn(Arr,num);
    double deciVal=decimalvalue(sqRoot,num);

    cout<<"The Square Root of "<<num <<" is : "<<deciVal<<endl;
}