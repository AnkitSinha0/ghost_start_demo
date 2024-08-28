#include <iostream>
using namespace std;
int main(){
   int num=20;
   int *ptr=&num;
   cout<<"address at ptr "<<ptr<<endl;
   //adding 1 to ptr
   ptr+=1;
   cout<<"Adding 1 "<<ptr<<endl;
   //subtracting 1 from ptr
   ptr-=1;
   //again adding 1
   cout<<"Subtracting 1 "<<ptr<<endl;
    ptr+=1;

   cout<<"again Adding 1 "<<ptr<<endl;

   //adding 2 to ptr
   ptr+=2;
   cout<<"Adding 2 "<<ptr<<endl;


}

