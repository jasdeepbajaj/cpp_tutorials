#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    if (n%2==0 && n%3==0)
    {
        cout<<"Number is divisible by both 2 and 3"<<endl;
    }
    else if (n%2==0 && n%3!=0)
    {
        cout<<"Number is divisible by 2 and not 3"<<endl;
    }
    else if (n%2!=0 && n%3==0)
    {
        cout<<"Number is divisible by 3 and not 2"<<endl;
    }
    else
    {
        cout<<"Number is divisible by neither 3 nor 2"<<endl;
    }
    
    return 0;

}