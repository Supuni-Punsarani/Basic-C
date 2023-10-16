#include<stdio.h>
void swap(int *a,int *b){
 int temp=*a;
 *a=*b;
 *b=temp;
 printf("%d %d",*a,*b);}
void main(){
 int a=5,b=10;
 swap(&a,&b);}
