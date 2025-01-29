/**
 * @file redo
 * @author Joseph Herron
 * @date 2025-01-28
 * @brief Test remake
 * 
 * Redoing every problem except for #4
 */


#include <iostream>

using namespace std;

//#1 remake
#include <iostream>
#include <fstream>
using namespace std;

const int MAX_ARRAY = 1000;

float average(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) sum += array[i];
    return size ? (float)sum / size : 0;
}

int main() {
    int array[MAX_ARRAY], size = 0;
    ifstream file("numbers.txt");
    while (size < MAX_ARRAY && file >> array[size]) size++;
    for (int i = 0; i < size; i++) cout << array[i] << " ";
    cout << "\nAverage: " << average(array, size) << endl;
    return 0;
}


// #2
#include <iostream>
#include <fstream>

using namespace std;

void readArrayFromFile(char* charArr, int maxSize, const string& filename) {
    ifstream file(filename);
    if (!file) {
        cerr << "Error opening file.\n";
        return;
    }

    int i = 0;
    while (i < maxSize && file >> charArr[i]) {
        i++;
    }
    file.close();
}

void printCharArray(const char* charArr, int size) {
    cout << "Character Array: ";
    for (int i = 0; i < size; i++) {
        cout << charArr[i] << " ";
    }
    cout << endl;
}

int main() {
    int charSize, intSize;

    // Dynamic character array
    cout << "Enter the size of the character array: ";
    cin >> charSize;
    char* charArr = new char[charSize];

    readArrayFromFile(charArr, charSize, "data.txt");
    printCharArray(charArr, charSize);
    delete[] charArr;

    // Dynamic integer array
    cout << "Enter the size of the integer array: ";
    cin >> intSize;
    int* intArr = new int[intSize];

    cout << "Enter " << intSize << " integers: ";
    for (int i = 0; i < intSize; i++) {
        cin >> intArr[i];
    }

    cout << "Integer Array: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    delete[] intArr;
    return 0;
}


//#3
#include <iostream>

using namespace std;

int main() {
    int size;
    cout << "Enter the size of the integer array: ";
    cin >> size;

    int* intArr = new int[size];  // Dynamically allocate array

    // Assume some operations are performed on intArr

    delete[] intArr;  // Deallocate memory
    cout << "Memory for intArr has been deallocated." << endl;

    return 0;
}

//#5
#include <iostream>
#include <fstream>

using namespace std;

const int MAX_ARRAY = 1000;

// Function to read integers from a file into an array
int populateArray(int arr[]) {
    ifstream file("my_file.txt");
    int count = 0;

    while (count < MAX_ARRAY && file >> arr[count]) {
        count++;
    }

    return count;
}

// Function to print the array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to compute the average
float computeAverage(const int arr[], int size) {
    if (size == 0) return 0;
    
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return static_cast<float>(sum) / size;
}

int main() {
    int arr[MAX_ARRAY];

    int size = populateArray(arr);
    printArray(arr, size);
    cout << "Average: " << computeAverage(arr, size) << endl;

    return 0;
}
