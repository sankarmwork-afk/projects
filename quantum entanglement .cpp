#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Seed random number generator

    // Simulate 10 entangled measurements
    for (int i = 0; i < 1; ++i) {
        int result = rand() % 2; // 0 or 1

        // Entangled pair: both qubits have same value
        cout << "Measurement " << i + 1 << ": Qubit A = " << result << ", Qubit B = " << result << endl;
    }

    return 0;
}