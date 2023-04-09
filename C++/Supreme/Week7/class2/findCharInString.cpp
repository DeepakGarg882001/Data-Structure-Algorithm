// You are given a String and A target Charcter.
// check that target char is Present or not in the given string
// eg: para = "Hello Dost"
//   target = 's'
// output: Present

// target = 'p'
// output: Not Present


#include<iostream>
#include<string>
#include<string.h>
using namespace std;

int findKey(string &para,char &key,int index){
      
      // base condition
      if(para[index]=='\0'){
        return -1;
      }
          
      // processing
      if(para[index]==key){
        return index;
      }

      // recursive call
      return findKey(para,key,index+1);
}

char getKey(){
    char key;
    cout<<"Enter the target Char : ";
    cin >> key;

    return key;
}

int main(){
    
    // create a string
    string para;
    cout<<"Enter Your Sentence : ";
    getline(cin,para);

    // get key
    char key = getKey();

    int indexIS = findKey(para,key,0);

    if(indexIS==-1){
        cout<<"Key Char ('"<<key<<"') is Not Present"<<endl;
    }else{
        cout<<"Key Char ('"<<key<<"') is Present at index "<<indexIS<<endl;
    }

return 0;
}