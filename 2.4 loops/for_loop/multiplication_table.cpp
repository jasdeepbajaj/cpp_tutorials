#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    for (int count = 1; count <= 10; count++)
    {
        cout<<n<<"*"<<count<<"="<<n*count<<endl;
    }
    

    return 0;

}