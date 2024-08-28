#include <iostream>
using namespace std;
struct node{
    int data1;
    char data2;
    struct node *link;
}
int main(){
    struct node obj1; //node
    
    obj1.link =NULL;
    obj1.data1=10;
    obj1.data2=20;

    obj2.link= NULL;
    obj2.data1=30;
    obj2.data2=40;

    obj1.link=&obj2;

    cout<<obj1.data1;
    
}