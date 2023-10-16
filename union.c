#include <stdio.h>

union student{
    char name[50];
    int age;
    char gender;};

void main(){
   union student students[3]={{"kamal",20,'m'},{"nimal",25,'m'},{"meena",56,'f'}};
   int i;
   for(i=0;i<3;i++){
    printf("student %d details:\n%s\n%d\n%c\n",i+1,students[i].name,students[i].age,students[i].gender);
   }}

/*enum state {working, failed};
enum result {failed, passed};
int main() { return 0; }*/


