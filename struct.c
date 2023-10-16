#include <stdio.h>

struct student{
    char name[50];
    int age;
    char gender;};

void main(){
   struct student students[3]={{"kamal",20,'m'},{"nimal",25,'m'},{"meena",56,'f'}};
   int i;
   for(i=0;i<3;i++){
    printf("student %d details:\n%s\n%d\n%c\n",i+1,students[i].name,students[i].age,students[i].gender);
   }}
