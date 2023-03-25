#include<iostream>
#include<dos.h>
using namespace std;
int main()
{
	int count=0;

    while(1>0){
         
         // wait for 10ms
         delay(10);

         // update total waiting time
         count++;
        
         // base condition
         if(count==100){
            // print something
               cout<<"Hello i am printing"<<endl;
            // after printing update count
            count = 0;
         }
     }

	return 0;
}