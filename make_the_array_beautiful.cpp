#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class solution{
    public:
    vector<int>beautiful(vector<int>arr){
    stack<int>s;
    for(int i=0;i<arr.size();i++){
        if(s.empty()){
            s.push(arr[i]);

        }
        else if(arr[i]>=0){
            if(s.top()>=0){
                s.push(arr[i]);
            }
            else{
            s.pop();
            }
        }
        else{
            if(s.top()<0){
                s.push(arr[i]);
            }
            else{
                s.pop();
            }
        }
    }
        vector<int>ans(s.size());
   
        int i = s.size()-1;
        while(!s.empty()){
            ans[i] = s.top();
            i--;
            s.pop();
        }

        return ans;
    }
};
int main(){
    solution st;
    vector<int> arr = {1,2,-1,4,5};

    vector<int> ans = st.beautiful(arr);

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}