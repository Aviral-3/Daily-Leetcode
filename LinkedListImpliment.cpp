#include <iostream>
using namespace std;
 class node
 {
    public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }

 };
 class LinkedListImpliment
 {

public:
int size=0;
 node *front;
 node *rear;

   LinkedListImpliment(){
    front=NULL;
    rear=NULL;
   }
   void enqueue(int x){
    node *temp=new node(x);
    if (front==NULL){
        front=rear=temp;
    }
    else{
        rear->next=temp;
        rear=rear->next;
        size++;
   }
   }
   int dequeue(){

    if (front==NULL)
    {
       return -1;
    }
    int a = front->data;
    node *temp=front;
    front=front-> next;
     delete temp;
     size--;
    if(front==NULL){
        rear=NULL;
    }
    return a;
   }
   int sizee(){
    cout<<"size of queue"<<size;
   }
   void getfront(){
    if(front==NULL){
        cout<<-1;
    }
    else
      cout<<front->data;
   }
   void getrear(){
    if(rear==NULL){
        cout<<-1;
    }
    else
      cout<<rear->data;
   }


 };

 int main(){
LinkedListImpliment q;
q.enqueue(100);
q.enqueue(50);
q.dequeue();
q.enqueue(30);
q.dequeue();
q.enqueue(16);

 }
