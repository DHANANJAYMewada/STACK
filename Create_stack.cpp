#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data=value;
        next=NULL;

    }
};
class stack{
    node*top;
    int size;
    public:
    stack(){
        top=NULL;
        size=0;
    }
    void push(int value){
        node*temp=new node(value);
        if(temp==NULL){
            cout<<"stack overflow";
            return;
        }
        else{
        temp->next=top;
        top=temp;
        size++;
       cout<<"pused= "<<value<<endl;
    }
}
void pop(){
    if(top==NULL){
   cout<<"stack underflow";


    }
    else{
        node*temp=top;
         cout<<"delete the node="<<top->data<<endl;
        top=top->next;
        delete temp;
       
    }
}
int peek(){
    if(top==NULL){
        return -1;
    }
    else{
        return top->data;
       
    
    }
}
 
    
};

int main(){ 
stack s;
s.push(5);
s.push(2);
s.push(1);
s.push(0);
s.pop();
cout<<s.peek();


return 0;
}