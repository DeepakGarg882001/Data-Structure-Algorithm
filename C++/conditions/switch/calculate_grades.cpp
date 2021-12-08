#include<iostream>
#include<math.h>
using namespace std;

int main(){
  cout<<"Please Enter you marks of all subject carefully :~"<<endl;
  cout<<"Physics : ";
  int phy;
  cin >> phy;

  cout <<"Chemistry : ";
  int chm;
  cin>>chm;

  cout <<"Math : ";
  int mat;
  cin >> mat;

  cout <<"English : ";
  int eng;
  cin>>eng;

  cout<<"Music : ";
  int mus;
  cin>>mus;

  int total = phy+mus+mat+chm+eng;
  int pernt = total/5;
  switch(pernt){
      case >=90 :        cout <<"Grade A "<<endl;
                         break;
      case <90 & >=80 :  cout <<"Grade B "<<endl;
                         break;          
      case <80 & >=70 :  cout <<"Grade C "<<endl;
                         break;
      case <70 & >=60 :  cout <<"Grade D "<<endl;
                         break;
      case <60 & >=40 :  cout <<"Grade E "<<endl;
                         break;
      default :  cout <<"Please Work hard "<<endl;                   
  }

}

