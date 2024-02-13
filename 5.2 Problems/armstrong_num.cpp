#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n;
    cin>>n;

    int sum = 0;
    int number = n;

    while (n>0)
    {
        int last_digit = n%10;
        sum += pow(last_digit, n);
        n=n/10;
        
    }
    if (sum == number)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Normal Number";
    }

    return 0;
    
}