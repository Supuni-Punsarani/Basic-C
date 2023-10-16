#include<stdio.h>
#include <string.h>
#include <stdlib.h>

int concat(int a,int d){

    char word1[100];  //string value of a
    char word2[100];  // string value of d
    char word3[100];  //string value of a

    sprintf(word1,"%d",a);  //convert integer to string
    sprintf(word2,"%d",d);
    sprintf(word3,"%d",a);

    strcat(word1,word2);    //concatenate the strings
    strcat(word2,word3);

    if(atoi(word1)>atoi(word2))  //convert integers to strings and compare the integers
        return atoi(word1);
    else
        return atoi(word2);
}

void main(){

    int a,b,c,i;  //a-number of integers,b-first integer

    scanf("%d",&a);  //get user inputs for a and d
    scanf("\n%d",&b);

    for(i=1;i<a;i++){
        scanf("%d",&c); //c-next integer
        b=concat(b,c);  //call the concat function
    }

    printf("\n%d",b);  //display largest concat number

}
