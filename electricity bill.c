#include<stdio.h>
# define METER 100
void main(){
 char name[50];
 int unit;
 float charge;

 printf("enter your name:");
 scanf("%s",name);

 printf("enter number of units:");
 scanf("%d",&unit);

 if(unit<200){
    charge=unit*0.8+METER;
 }
 else if(unit<300){
    charge=(200*0.8)+((unit-200)*0.9)+METER;
 }
 else{
    charge=(200*0.8) +(100*0.9)+((unit-300)*1)+METER;
 }

 printf("charge is:%.3f",charge);
 }
