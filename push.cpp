#include<iostream>
using namespace std;
class stack{
    int*arr;
    int size;
    int top;
    public:
    stack(int s){
        size=s;
        top=-1;

        arr=new int[s];

    }
    void push(int value){
        if(top==size-1){
            cout<<"stack overflow";
return;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"push = "<<value<<endl;

        }
    }
    void pop(){
        if(top==-1){
            cout<<"stack under flow";
        }
        else{
            top--;
            cout<<"pop = "<<arr[top+1]<<endl;
        }
    


    }
    int peek(){
        if(top==-1){
            cout<<"stack is empty";
            return -1;

        }
        else{
            return arr[top];
        }
    }
    bool isempty(){
        return top==-1;
    }
    int issize(){
        return top+1;
    }
};
int main(){
    stack s(5);
    s.push(3);
    s.push(2);
    s.push(5);
    
    s.pop();
   cout<< s.isempty()<<endl;
   cout<< s.issize();

    cout<<s.peek();


return 0;
}