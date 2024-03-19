// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int f = 0, l = size, m = 0, count = 0;
	while (f <= l) {
		m = f + (l - f) / 2;
		if (value == arr[m]) {
			while (m > 0 && arr[m] == value) {
				m--;
			}
			while (arr[m] == value) {
				m++;
				count++;
			}
			break;
		} else if (value > arr[m]) {
			f = m;
		} else if (value < arr[m]) {
			l = m;
		} else if (l == f && value != arr[m]) {
			return count;
		}
	}
	return count;
}
