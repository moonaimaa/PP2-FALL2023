#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack <char> st;
    string s;
    cin>>s;
    for(int i=0; i<s.size();i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(!st.empty() && (st.top()==s[i])){
            st.pop();
        }
        else if(!st.empty() && (st.top()!=s[i])){
             st.push(s[i]);

        }
    }
    if(st.size()==0){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;

}