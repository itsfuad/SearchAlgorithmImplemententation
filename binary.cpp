#include <iostream>
#include "dependencies/mergeSort.hpp"

//binary search using recursion

//params (arr, left, right, target)
int binarySearch(const int arr[], int left, int right, int target) {
    //if the left exceeds the right, return -1
    if (left > right) {
        return -1;
    }
    //find the middle index
    int mid = (left + right) / 2;
    //if the middle index is the target, return the index
    if (arr[mid] == target) {
        return mid;
    }
    //if the middle index is greater than the target, search the left half
    if (arr[mid] > target) {
        return binarySearch(arr, left, mid - 1, target);
    }
    //if the middle index is less than the target, search the right half
    return binarySearch(arr, mid + 1, right, target);
}

void printArr(int* arr, short size) {
    std::cout << "[ ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << " ]" << std::endl;
}

int main() {
    
    short size;
    std::cout << "Size of array: ";
    std::cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i << ": ";
        std::cin >> arr[i];
    }

    mergeSort(arr, size);

    std::cout << "Sorted array: ";
    printArr(arr, size);

    int target;
    std::cout << "Enter the target to search: ";
    std::cin >> target;

    std::cout << binarySearch(arr, 0, size - 1, target) << std::endl;

    return 0;
}