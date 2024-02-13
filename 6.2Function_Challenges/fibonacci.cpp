#include<iostream>
#include<math.h>
using namespace std;

void fib(int num){
    int t1 = 0, t2 = 1;

    for (int i = 1; i <= num; i++)
    {
        cout<<t1<<" ";
        int t_next = t1+t2;
        t1 = t2;
        t2 = t_next;
    }
    return;
    // if (num == 1)
    // {
    //     cout<<t1<<endl;
    // }
    // else if (num==2)
    // {
    //     cout<<t2<<endl;
    // }
    // else
    // {
    //     cout<<t1<<endl;
    //     cout<<t2<<endl;
    //     for (int i = 3; i <= num; i++)
    //     {
    //         int t_next = t1 + t2;
    //         cout<<t_next<<endl;
    //         t1 = t2;
    //         t2 = t_next;
    //     }
        
    // }
    // return;

}
int main() {

    int n;
    cin>>n;

    fib(n);

    
    
    
    

    return 0;
}