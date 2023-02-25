// Find a unique element in the vector, In this we have many elements and each element is present twise in vector but only one element is present Once in vector. Find that element

#include<iostream>
#include<vector>
using namespace std;

int findUniqueElement(vector<int> arr){
    int ans =0;

    for(int index=0; index<arr.size();index++){
        ans = ans ^ arr[index];
    }
 return ans;
}

void takeInput( vector<int> arr){
        
        for(int index; index<arr.size();index++){
            cout <<"Enter the value of Arr[ "<<index<<" ] : ";
            cin >> arr[index];
        }

}

int main(){
   
   int n ;
   cout << "Enter the size of Array : ";
   cin >> n;
   
   vector<int> arr(n);

   takeInput(arr);
    
    int uniqueElement = findUniqueElement(arr);
     
     cout << "Unique element is : "<< uniqueElement<<endl;

  
    return 0;
}