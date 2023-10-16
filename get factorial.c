#include<stdio.h>

int factorial(n){
 if(n==0){
    return 1;
 }
 else{
    return n*factorial(n-1);
 }}
void main(){
 int n=5;
 int result=factorial(n);
 printf("result:%d",result);}
