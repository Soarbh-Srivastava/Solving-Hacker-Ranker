// Category: 2D-Array-DS, Tag: Left-Rotation
#include <iostream>

void rotateLeft(int d, int arr[], int n) {
    d = d % n;

    for (int i = 0; i < n; ++i) {
        int newIndex = (i + d) % n;
        std::cout << arr[newIndex] << " ";
    }
}

int main() {
    int arraySize, positionsToRotate;
    std::cin >> arraySize >> positionsToRotate;
    int originalArray[arraySize];
    for (int i = 0; i < arraySize; ++i) {
        std::cin >> originalArray[i];
    }
    rotateLeft(positionsToRotate, originalArray, arraySize);

    return 0;
}
