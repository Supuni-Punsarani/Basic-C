void getMinMax(int* arr, int size, int* min, int* max) {
    *min = *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min)
             *min = arr[i];
        if (arr[i] > *max)
             *max = arr[i];
}
}
int main() {
int nums[] = {5, 2, 9, 1, 7};
int minVal, maxVal;
getMinMax(nums, 5, &minVal, &maxVal);
printf("Min: %d, Max: %d\n", minVal, maxVal); // Output: Min: 1, Max: 9
return 0;
}
