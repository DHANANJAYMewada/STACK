#include<iostream>
#include<stack>
using namespace std;
class inser{
    public:
stack<int>insertat(stack<int>st,int x){
    stack<int>temp;
    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
        /* code */
    };
    st.push(x);
    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
        /* code */
    }
    
    return st;
}

};


int main(){
    inser s;
    stack<int>st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st=s.insertat(st,10);
       while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
return 0;
}