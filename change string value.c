#include<stdio.h>
#include<string.h>
void main(){
 char x[50]="supuni punsarani wannigama";
 char d,e;
 printf("enter you want to change:");
 scanf("%c",&d);
 printf("enter letter for the change:");
 scanf("\n%c",&e);
 for(int i=0;i<strlen(x);i++){
    if(x[i]==d){
        *(&x[i])=e;
    }
 }
printf("%s",x);
 }
