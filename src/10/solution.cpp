int sum_array(int* from, int* to) {
	if (from == nullptr || to == nullptr || from >to) {
		return 0;
	}
	int sum = 0;
	for (int* p = from; p < to;p++) {
		sum += *p;
	}
	return sum;
}