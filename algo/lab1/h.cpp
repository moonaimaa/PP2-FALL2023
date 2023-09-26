#include <iostream>
using namespace std;

bool boolka(int n){
    if(n==0 || n==1){
        return false;
    }
    if(n/2==0){
        return false;
    }
    return true;
}

int main(){
    int num;
    cin>>num;
    if(boolka(num)==true){
        cout<<"Yes";
    }
    else{
        cout<<" NO";
    }


    return 0;
}