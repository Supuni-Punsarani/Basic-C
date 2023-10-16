#include <stdio.h>
void FrstOcc(int arr[], int size, int trgt) {
    for (int i=0;i<size;i++){
        if(*(arr+i)==trgt)
        {
            printf("Target value found in th occurence");
            break;
        }

      continue;
    }


}

int main() {
    int array[]={1,100,3,4,5,2,2,2,2};
    int size=sizeof(array)/sizeof(array[0]);
  FrstOcc(array,size,3);

    return 1;
}
