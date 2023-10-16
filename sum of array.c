#include<stdio.h>

int sum(int x[],int size){
    int s=0;
    for(int i=0;i<size;i++){
        s+=*(x+i);
    }
    return s;
 }
void main(){
 int x[]={2,3,4,5,6};
 int size=sizeof(x)/sizeof(x[0]);
 int result=sum(x,size);
 printf("%d",result);
 }
