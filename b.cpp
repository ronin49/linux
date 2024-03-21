#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;
using namespace chrono;

// Function to benchmark
void longRunningFunction() {
    // Simulate some time-consuming operation
    for (int i = 0; i < 1000000000; ++i) {
        // Do some computation
        double x = sqrt(i);
    }
}

int main() {
    // Start measuring time
    auto start = high_resolution_clock::now();

    // Call the function to be benchmarked
    longRunningFunction();

    // Stop measuring time
    auto stop = high_resolution_clock::now();

    // Calculate the duration
    auto duration = duration_cast<milliseconds>(stop - start);

    // Output the duration
    cout << "Execution time: " << duration.count() << " milliseconds" << endl;

    return 0;
}

