#include<iostream>
#include<math.h>
using namespace std;

int factorial(int num){

    int fact = 1;
    for (int i = num; i >= 1; i--)
    {
        fact *= i;
    }
    return fact;
    

}
int main() {

    int n, r;
    cin>>n>>r;

    int ans = factorial(n)/(factorial(n-r)*factorial(r));

    cout<<n<<"C"<<r<<" is "<<ans<<endl;
    

    return 0;
}