#include<stdio.h>

void main(){
 int n,i,j;
 printf("Enter number of values you want:");
 scanf("%d",&n);
 printf("enter values:");
 int arr[n];
 for(i=0;i<n;i++){
    scanf("%d",&arr[i]);}
 int temp,swapped;
 do{
        swapped=0;
    for(i=0;i<n-1;i++){
       if (arr[i] > arr[i + 1]) {
                // Swap arr[i] and arr[i+1]
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped=1;
            }

  }

 }
   while(swapped);


 for(i=0;i<n;i++){
   printf("%d",arr[i]);}


        }





 /*#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int temp;
    int swapped;

    do {
        swapped = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                // Swap arr[i] and arr[i+1]
                temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swapped = 1;
            }
        }
    } while (swapped);
}

int main() {
    int N;

    printf("Enter the number of integers (N): ");
    scanf("%d", &N);

    int numbers[N];

    printf("Enter %d integers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sort the array in ascending order using bubble sort
    bubbleSort(numbers, N);

    printf("Numbers in ascending order:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}*/

