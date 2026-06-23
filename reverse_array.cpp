#include<iostream>
# include<vector>
# include<stack>
using namespace std;
class solution{
    public:
    void reverse(vector<char>& s){
        stack<char>st;
        for(int i=0;i<s.size();i++){
            st.push(s[i]);


        }
int i=0;
while (!st.empty())
{
    s[i]=st.top();
    i++;
    st.pop();
    /* code */
}


    }
};
int main(){
    solution obj;

    vector<char> s = {'h','e','l','l','o'};

    obj.reverse(s);

    for(char ch : s) {
        cout << ch << " ";
    }

return 0;
}