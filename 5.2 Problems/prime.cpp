#include <iostream>
#include <cmath> //sqrt is a part of cmath header file in cpp

using namespace std;

int main(){
    int n;
    cin>>n;

    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++) //optimized it by reducing the search size from n to sqrt(n)
    {
        if (n%i==0)
        {
            cout<<n<<" is not a prime number";
            flag = 1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<n<<" is a prime number";
    }
    
    
    

    return 0;
    
}