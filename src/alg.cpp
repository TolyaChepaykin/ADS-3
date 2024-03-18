// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
int f = 0, l = size, m = 0;
while (f <= l) {
 m = f + (l - f) / 2;
 if (value == arr[m]) {
  return arr[m];
 }
 else if (value > arr[m]) {
  f = m;
 }
 else if (value < arr[m]) {
  l = m;
 }
 return 0;
}
}
