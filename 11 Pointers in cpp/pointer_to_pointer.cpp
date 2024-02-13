#include <iostream> 
using namespace std; 

int main() { 
    
    int a = 10; // Declares an integer variable 'a' and initializes it with the value 10

    int* p = &a; // Declares a pointer 'p' of type int* and initializes it with the address of 'a'

    cout << *p << endl; // Dereferences pointer 'p' to get the value of 'a' and prints it. Output: 10

    int** q = &p; // Declares a pointer-to-pointer 'q' of type int** and initializes it with the address of pointer 'p'

    cout << *q << endl; // Dereferences pointer-to-pointer 'q' once to get the value of 'p' (which is the address of 'a') and prints it. This prints the address of 'a'
    cout << **q << endl; // Dereferences pointer-to-pointer 'q' twice to get the value pointed by 'p' (which is the value of 'a') and prints it. Output: 10

    return 0;
}
