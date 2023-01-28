#include<iostream>
using namespace std;

int minPageSr(int Arr[],int books,int students){
     int Tpage=0;
     int ans=0;

     for(int k=0;k<books;k++){
         Tpage=Tpage+Arr[k];
     }  
     
     int start=0;
     int end =Tpage-1;
     int mid= start+((end-start)/2);
     
     while(start<=end){
         int sum[50]={0};
         int Tsum=0;
         int j=0;
         for(int i=0;i<students;i++){
            
            while(sum[i]<=mid){
                if(sum[i]+Arr[j]<=mid){
                  sum[i]=sum[i]+Arr[j];
                  j++;
                  if(j<books){
                      continue;
                  }else{
                      break;
                  }
                }else{
                    break;
                }
            }
            Tsum=Tsum+sum[i];
         }

         if(Tsum == Tpage){
           ans=mid;
           end=mid-1;
         }else{
            start=mid+1;
         }
         mid= start+((end-start)/2);
       }  
return ans;
}

int main(){
  cout<<"How many books do you have : ";
  int books;
  cin>>books;

  cout<<"In How many students Do you want to distribute these : ";
  int students;
  cin>>students;

  int Arr[100]={0};
  for(int i=0;i<books;i++){
      cout<<"Please enter the number of Pages in "<<i+1<<" book : ";
      cin>>Arr[i];
  }

  int minPage=minPageSr(Arr,books,students);
  cout<<"the minimum nummber of pages alloted to a student is :"<<minPage<<endl;

}