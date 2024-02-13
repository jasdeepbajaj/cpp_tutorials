#include<iostream>
using namespace std;


int main(){
    int a,b,c;
    cin>>a>>b>>c;

    if (a>b){
        if (a>c){
            cout<<"a is bigger\n";
        } else {
            cout<<"c is bigger\n";
        }    
    } else {
        if (b>c) {
            cout<<"b is bigger\n";
        } else {
            cout<<"c is bigger\n";
        }    
    }

    return 0;

}