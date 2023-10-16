//#include<stdio.h>
//#include<string.h>
//#include<math.h>

/*int binary(char n[],int index){
    if (index == 0) {
        return n[index] - '0'; // Convert character to integer
    }

    // Recursive case: Calculate the decimal equivalent of the remaining binary digits
    int digit = (n[index])-'0' ; // Convert character to integer
    int power = (int)pow(2, index);

    return digit * power + binary(n, index - 1);
 }
void main(){
char n[50];
printf("enter binary number:");
scanf("%s",n);
int result=binary(n,strlen(n)-1);
printf("%d",result);

}
//(int)pow(2, (double)((strlen(n)) - 1 - index));*/
#include<stdio.h>
#include<math.h>
#define SIZE 1000

int rem,i =0,result = 0;

void decimalConverter(long int n){

    if(n != 0){
       rem = n%10;
       result += rem*pow(2,i);
       i++;
       decimalConverter(n/10);
    }
}


void main(){

    int n;

    printf("Enter the binary number: ");
    scanf("%d",&n);

    decimalConverter(n);
    printf("The decimal number is %d ",result);

}
