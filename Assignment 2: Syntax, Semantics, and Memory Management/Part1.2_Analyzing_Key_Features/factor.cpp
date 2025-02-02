#include <iostream>
#include <functional>
using namespace std;

int main() {
    // Strong typing: Explicit declarations
    int factor = 2;

    // Simulating closures using lambda functions
    auto doubleIt = [factor](int number) { return number * factor; };

    cout << doubleIt(5) << endl;  // Outputs 10

    // Scope demonstration
    {
        int scopedVar = 10;
        cout << "Inside block: " << scopedVar << endl;
    }
    // cout << scopedVar; // Error: scopedVar is out of scope
    return 0;
}
