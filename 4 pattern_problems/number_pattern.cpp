#include<iostream>
using namespace std;


int main(){
    
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int space1 = n-i;
        for (int j = 1; j <= space1; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    } 
    return 0;
}