#include<stdio.h>

void findMinMax(const float *arr, int size, float *max, float *min) {
    if (size <= 0) {
        // Handle the case of an empty array or invalid size.
        printf("Array is empty or size is invalid.\n");
        return;
    }

    // Initialize max and min with the first element of the array.
    *max = *arr;
    *min = *arr;

    // Iterate through the array using pointers to find max and min values.
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
    }
}
int main() {
    float arr[] = {3.14, 2.71, 1.618, 42.0, -5.0};
    int size = sizeof(arr) / sizeof(arr[0]);
    float max, min;

    findMinMax(arr, size, &max, &min);

    printf("Maximum value: %.2f\n", max);
    printf("Minimum value: %.2f\n", min);

    return 0;
}


/*void ab(float arr[],float size){
    float *min=*arr[0];
    float *max=*arr[0];
  for(int i=0;i<size;i++){
        if(*max<*(arr+i)){
            *max=*(arr+i);
        }
        if(*min>*(arr+i)){
            *min=*(arr+i);
        }
  }
  printf("%f",min);
 printf("%f",max);


  }
void main(){
 float arr={3.0,5.789,2.56789,2.5678};
 ab(arr,4);



}*/
