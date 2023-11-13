#include <iostream>

using namespace std;

// Bubble Sort function
void bubbleSort(int *V, int N) {
    int aux, end = N;
    bool continueFlag = false;
    do {
        // This variable is a flag.
        // If no swaps occur, the while loop will not be executed anymore
        continueFlag = false;
        for (int i = 0; i < end - 1; i++) {
            if (V[i] > V[i + 1]) {  // Tests if the previous element is greater than the next one (ASCENDING ORDER)
                                   // V[i] < V[i + 1] -----> To sort in descending order
                // Swaps the values
                aux = V[i];
                V[i] = V[i + 1];
                V[i + 1] = aux;
                // Sets "continueFlag" to true to continue the while loop
                continueFlag = true;
            }
        }
        end--;  // Decrements the end because as the algorithm progresses, the end of the array is already sorted
    } while (continueFlag != false);
}

int main() {
    
    // Defining the values of the array in unsorted order
    int values[] = {67, 72, 13, 1, 2, 45, 3, 4, 89};

    // Calculate the size of the array
    int size = sizeof(values) / sizeof(values[0]);
    
    // Print this array in unsorted order
    cout << "Array values before sorting." << endl;
    for (int i = 0; i < size; i++) {
        cout << values[i] << endl;
    }

    // Calls the bubble sort function, passing the array and its size
    bubbleSort(values, size);

    // Print the array after sorting
    cout << "Array values after sorting." << endl;
    for (int i = 0; i < size; i++) {
        cout << values[i] << endl;
    }
    cout << values << endl;
    
    return 0;
}
