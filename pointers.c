#include<stdio.h>

void main(){
 int my[4]={25,70,78,89};
 *(&my[2])=50;
 for(int i=0;i<4;i++){
    printf("%d\n",*(my+i));
 }
 }

