//merge sort using recursion
void mergeSort(int* arr, short size){
    if (size > 1) {
        short mid = size / 2;
        short leftSize = mid;
        short rightSize = size - mid;
        int* left = new int[leftSize];
        int* right = new int[rightSize];
        for (int i = 0; i < leftSize; i++) {
            left[i] = arr[i];
        }
        for (int i = 0; i < rightSize; i++) {
            right[i] = arr[i + mid];
        }
        mergeSort(left, leftSize);
        mergeSort(right, rightSize);
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < leftSize && j < rightSize) {
            if (left[i] < right[j]) {
                arr[k] = left[i];
                i++;
            } else {
                arr[k] = right[j];
                j++;
            }
            k++;
        }
        while (i < leftSize) {
            arr[k] = left[i];
            i++;
            k++;
        }
        while (j < rightSize) {
            arr[k] = right[j];
            j++;
            k++;
        }
        delete[] left;
        delete[] right;
    }
}