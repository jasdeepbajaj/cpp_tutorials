#include<iostream>
using namespace std;


int main(){
    int n1, n2;
    cout<<"Input two numbers"<<endl;
    cin>>n1>>n2;

    char op;
    cout<<"What kind of operation would you like to perform on two numbers"<<endl;
    cin>> op;

    float result;

    switch (op)
    {
    case '*':
        result = n1*n2;
        break;
    
    case '+':
        result = n1+n2;
        break;
    
    case '-':
        result = n1-n2;
        break;

    case '/':
        result = n1/n2;
        break;
    
    default:
    cout<<"Chutiye basic calculator nahi pata?"<<endl;
        break;
    }
    
    cout<<result<<endl;
    return 0;

}