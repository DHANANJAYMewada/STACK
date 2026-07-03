#include<iostream>
using namespace std;
#include<stack>
class solution{
    public:
    int minadd(string str){
        int count=0;
        stack<char>s;
        for(int i=0;i<str.size();i++){
            if(str[i]=='('){
                s.push(str[i]);

            }
            else{
                if(s.empty()){
                 
                    count++;
               

                }
                else {s.pop();

                }


            }

        }
return count+s.size();
    }

};
int main(){
    solution s;
    string str="(())))";

    cout<<s.minadd(str)<<endl;


return 0;
}