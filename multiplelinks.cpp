#include <iostream>
using namespace std;
struct node{
int d1;
struct node *next_link;
struct node *prev_link;

};
int  main(){
struct node obj1;

obj1.prev_link=NULL;
obj1.next_link=NULL;
obj1.d1=10;

struct node obj2;

obj2.prev_link=NULL;
obj2.next_link=NULL;
obj2.d1=20;

struct node obj3;

obj1.prev_link=NULL;
obj1.next_link=NULL;
obj1.d1=30;

obj1.next_link=&obj2;
obj2.next_link=&obj3;

obj3.prev_link=&obj2;
obj2.prev_link=&obj1;

cout<<obj1.next_link->d1<<endl;
cout<<obj1.next_link->next_link->d1;
}
