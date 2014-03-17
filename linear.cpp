#include <iostream>

short linearSearch(const int arr[], short size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target;
    std::cout << "Enter the target to search: ";
    std::cin >> target;
    short size = sizeof(arr) / sizeof(arr[0]);
    std::cout << linearSearch(arr, size, target) << std::endl;
    return 0;
}