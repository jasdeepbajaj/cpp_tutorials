#include<iostream>
#include<math.h>
using namespace std;

bool is_prime (int num){
    for (int i = 2; i <= sqrt(num); i++) {
        if (num%i == 0) {
            return false;
        }
        }
    return true;
}

int main(){
    int a, b;
    cin>>a>>b;

    int num, i;

    for (num = a; num <= b;  num++) {
        if (is_prime(num))
        {
            cout<<num<<endl;
        }
        
    }
    return 0;

}