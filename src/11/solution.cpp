void sort_values(int& a, int& b, int& c) {
	if (a > b) {
		int m = a;
		a = b;
		b = m;
	}
	if (b > c) {
		int m = b;
		b = c;
		c = m;
	}
	if (a > b) {
		int m = a;
		a = b;
		b = m;
	}
}