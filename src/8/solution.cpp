void swap_int(int* a, int* b) {
	if (a== nullptr || b== nullptr) {
		return;
	}
	int m = *a;
	*a = *b;
	*b = m;

}