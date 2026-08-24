void calculateStats(const int* arr, int size, int& minVal, int& maxVal, long long& sum){
    minVal = arr[0];
    maxVal = arr[0];
    sum = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
        sum += arr[i];
    }
}
