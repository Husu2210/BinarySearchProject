#include <iostream>
#include "Searching.cpp"

int main() {
    std::vector<int> vec = {10, 20, 30, 30, 30, 40, 50, 60, 70, 70}; // Already sorted
    int target;
    std::cout << "Enter the value of target: ";
    std::cin >> target;

    // Binary search for vector
    int index = binarySearch(vec, target);
    if (index != -1) {
        std::cout << "Binary search. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search. Element not found in the vector." << std::endl;
    }

    // Binary search first occurrence for vector
    index = binarySearchFirst(vec, target);
    if (index != -1) {
        std::cout << "Binary search (first). Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search (first). Element not found in the vector." << std::endl;
    }

    std::array<int, 10> arr = {10, 20, 30, 30, 30, 40, 50, 60, 70, 70};
    index = binarySearch(arr, target);
    if (index != -1) {
        std::cout << "Binary search. Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search. Element not found in the array." << std::endl;
    }

    index = binarySearchFirst(arr, target);
    if (index != -1) {
        std::cout << "Binary search (first). Element found at index: " << index << std::endl;
    } else {
        std::cout << "Binary search (first). Element not found in the array." << std::endl;
    }

    return 0;
}
