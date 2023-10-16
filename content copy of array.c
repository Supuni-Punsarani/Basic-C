#include<stdio.h>

int copy(int x[],int y[],int size){
    for(int i=0;i<size;i++){
        *(x+i)=*(y+i);
    }
}
void main(){
 int a[]={1,2,3,4,5};
 int b[]={2,5,6,7,8};
 copy(a,b,5);
 for(int i=0;i<5;i++){
    printf("%d ",a[i]);
 }}
