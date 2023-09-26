#include <iostream>
#include <stack>
using namespace std;



int main(){
    string s, st;
    cin>>s>>st;
    stack<char> st1;
    stack<char>st2;
    
    for(int i=0;i<s.size();i++){
        if(s[i]!='#'){
           st1.push(s[i]);
        }
        else{
            st1.pop();
        }
    }
    for(int i=0;i<st.size();i++){
        if(s[i]!='#'){
           st2.push(st[i]);
        }
        else{
            st2.pop();
        }
    }
    if(st1==st2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}