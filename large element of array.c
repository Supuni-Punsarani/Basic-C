#include<stdio.h>
void large(int x[],int size){
    int min=*x;
    for(int i=0;i<size;i++){
        if(min<*(&x[i])){
            min=*(&x[i]);
        }
    }
    printf("%d",min);
    printf("\n%p",&min);

 }
void main(){
 int x[]={2,3,5,7,9};
 int size=sizeof(x)/sizeof(x[0]);
 large(x,size);
 }
