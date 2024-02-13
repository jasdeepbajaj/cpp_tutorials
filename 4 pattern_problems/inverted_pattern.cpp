#include<iostream>
using namespace std;


int main(){

    int n;
    cin>>n;

    // for (int i=1; i<=n; i++) //for number of rows from 5 to 1
    // {   
    //     int count = 1;
    //     for (int j=n; j>=1; j--) // for number of stars equal to the row number
    //     {
    //         if (i<=j)
    //         {
    //             cout<<count<<" ";
    //             count++;
    //         }
    //         else
    //         {
    //             cout<<" ";
    //         }
            
            
    //     }
    //     cout<<endl;
        
    // }

    for (int i = n; i >= 1; i--)
    {
        // int count = 1;
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
            // count++;
        }
        cout<<endl;
        
    }
    
    return 0;
}