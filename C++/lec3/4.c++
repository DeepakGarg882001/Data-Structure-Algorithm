#include<iostream>
using namespace std;

int main(){
cout << " Please Enter the value of a : ";
int a;
cin >> a;
cout << " Please Enter The value of b : ";
int b;
cin >> b;
cout << " which Comparision do you want to perform with a b : ";
char op;
cin >> op;
cout << "Hi, you choose that a"<< op << "b , So the result of this will be :";
if(op == '>'){
    if(a>b){
        cout << "a is greater than b" << endl;

    }else{
        cout << "b is greater than a" << endl;
    }
}else if(op == '<'){
    if(a<b){
        cout << "b is greater than a" << endl;
    }else{
        cout << "a is greater than b" << endl;
    }

}



}