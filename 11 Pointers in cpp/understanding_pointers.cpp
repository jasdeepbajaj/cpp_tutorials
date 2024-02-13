#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int* aptr = &a; // aptr is a pointer to an integer, storing the address of a

    cout << aptr << endl; // Outputs the hexadecimal address where 'a' is stored
    cout << *aptr << endl; // Dereferencing - outputs the value stored at the address pointed by aptr, which is the value of 'a'
    *aptr = 20; // Changing the value stored at the address pointed by aptr, effectively updating the value of 'a'

    cout << a << endl; // The value inside 'a' will be updated to 20, reflecting the change made through the pointer

    return 0;
}
