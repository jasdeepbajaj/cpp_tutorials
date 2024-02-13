#include<iostream>
using namespace std;


int main(){
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        int j;
        for (j = 1; j <= rows - i; j++)
        {
            cout<<"  ";
        }
        int k = i;
        for (; j <= rows; j++)
        {
            cout<<k--<<" ";
        }
        k=2;
        for (; j <= rows + i -1 ; j++)
        {
            cout<<k++<<" ";
        }
        cout<<endl;
        
        
    }
    


    
    
    return 0;

}