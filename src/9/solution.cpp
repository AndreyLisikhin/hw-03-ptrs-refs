int sum_array(int* arr, int size) {
	if (arr==nullptr) {
		return 0;
	}
	int sum = 0;
	for (int i = 0; i < size;i++) {
		sum += arr[i];
	}
	return sum;
}