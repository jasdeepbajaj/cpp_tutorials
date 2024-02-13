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

    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<"Factorial for "<<n<<" is "<<ans<<endl;
    

    return 0;
}