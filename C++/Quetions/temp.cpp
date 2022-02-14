#include<iostream>
#include <vector>
#include<math.h>
using namespace std;

int main(){
    vector<int> a(3); a={5,2,4};
    vector<int> b(4);b={4,6,9};
    int n=a.size();
    int m=b.size();
    cout <<"n ="<<n<<endl;

   int A=0;
     for(int i=0;i<n;i++){
         A=(A*10)+a[i];
     }
     int B=0;
     for(int i=0;i<m;i++){
         B=(B*10)+b[i];
     }
     int C=A+B;
     int s;
     if(m>n){
         s=m+1;
     }else{
         s=n+1;
     }
      int powe=pow(10,s-1);
     if(C/powe == 0){
           s=s-1;
     }

     cout <<"s = "<<s<<endl;
    //  int size =s-1;
    //  vector<int> Arr(s);
    //  for(int i= size;i>=0;i--){
    //      int digit=C%10;
    //      Arr[i]=digit;
    //      C=C/10;
    //  }
      vector<int> Arr(s);
      int g=s-1;
      while(C!=0){
          int digit=C%10;
          Arr[g]=digit;
          C=C/10;
          g--;
      }
      int l= Arr.size();
     for(int j=0;j<l;j++){
         cout<<Arr[j]<<" ";
     }


}