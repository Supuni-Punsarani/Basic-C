#include<stdio.h>

int reverse(int arr[],int size){
    int temp;
    for(int i = 0,j = size-1; i< j; i++,j--){
        temp = *(arr+j);
        *(arr+j) = *(arr+i);
        *(arr+i) = temp;
    }

}
void main(){
 int arr[]={1,2,3,4,57,8};
 int size=sizeof(arr)/sizeof(arr[0]);
 reverse(arr,size);
 for(int i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }
    }
