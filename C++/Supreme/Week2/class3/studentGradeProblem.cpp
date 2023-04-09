// Write a Algorithm for student Grade Problem;

#include<iostream>
using namespace std;

void printLevel(int grade){
        
        switch (grade)
        {
        case 90 ... 100: cout <<" A+ Grade"<<endl;
            break;

        case 80 ... 89: cout <<" B+ Grade"<<endl;
            break;

        case 70 ... 79: cout <<" C Grade"<<endl;
            break;

        case 40 ... 69: cout <<" D Grade"<<endl;
            break;

        default: cout <<" Fail "<<endl;
            break;
        }

}

int main(){
     
     int grade;
     cout <<"Enter Your Grades (0 to 100 ) : ";
     cin>>grade;
     
     printLevel(grade);

     return 0;
}