#include <iostream> //preprocessor directive used to include files
#include <cstdio> // Include the C Standard I/O library for freopen

using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int a, b;

    cin >> a >> b;
    cout << a + b << "\n";

    // Close the file streams (good practice but might not be necessary for some systems)
    fclose(stdin);
    fclose(stdout);

    return 0;
}
