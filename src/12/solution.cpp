void sort_values(int* a, int* b, int* c) {
    int* arr[3] = { a, b, c };
    for (int i = 0; i < 3; i++) {
        if (arr[i] == nullptr) continue;

        for (int j = i + 1; j < 3; j++) {
            if (arr[j] == nullptr) continue;

            if (*arr[i] > *arr[j]) {
                int tmp = *arr[i];
                *arr[i] = *arr[j];
                *arr[j] = tmp;
            }
        }
    }
}
