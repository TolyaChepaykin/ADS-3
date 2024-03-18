// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int m = size / 2;
for (int i = 0; i < size; ++i) {
	if (value == arr[m]) {
		return arr[m];
	}
	else if (value > arr[m]) {
		i = m;
	}
	else if (value < arr[m]) {
		size = m;
	}
	else {
		return 0;
	}
}
}
