#include<iostream>
using namespace std;
#include<vector>
#include<stack>
class solution{
    public:
    int remove(vector<string>v){
    stack<string>st;
 for(int i=0;i<v.size();i++){
    if(st.empty())
{
    st.push(v[i]);

}
else if(st.top()==v[i]){
    st.pop();
}
else{
    st.push(v[i]);
}
    }
         vector<string> result;

        while (!st.empty()) {
            result.push_back(st.top());
            st.pop();
        }
     cout << "Remaining Strings: ";

        for(int i = result.size()-1; i >= 0; i--){
            cout << result[i] << " ";
        }

        cout << endl;

        return result.size();
    }
};  

int main(){
  solution s;
    vector<string> v = {"A", "A", "A", "C", "D", "A", "C", "D", "B", "E", "A", "C"};
    int result = s.remove(v);
    cout << "Number of unique strings: " << result << endl;

return 0;
}