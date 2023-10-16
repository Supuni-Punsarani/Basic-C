#include<stdio.h>
#include<string.h>
#define SIZE 1000

void palindrome(char s[]){

     int i,j,n,l,count1=0,count2=0;  //n-flag
                                     //count1-number of characters have to add front to make a palindrome
                                     //count2-number of characters have to add back to make a palindrome

    l=strlen(s);

    for(i=0;i<strlen(s);i++){         //check the word if it is palindrome or not

      if(s[i]==s[l-(i+1)]){
         n = 1;
         continue;
      }

      else{
        n = 0;
        break;
      }

   }

    if(n==1)                           //if it is palindrome then display 0
        printf("\npalindrom");

    else{                              //if it is not a palindrome then calculate number of characters add front or end of the word to make a palindrome

      for(i=0,j=l-1;i<j;i++,j--){

        if(s[i]!=s[j]){
            count1++;
            j++;
        }

      }


      for(j=0,i=l-1;j<i;j++,i--){

        if(s[j]!=s[i]){
            count2++;
            j--;
        }

      }

       if(count1<count2)                //find add minimum number of characters to make a palindrome
          printf("\n%d",count1);
       else
           printf("\n%d",count2);

    }

     }

void main(){

   char s[SIZE];

   scanf("%s",s);    //get the word from user

   palindrome(s);    //call the function palindrome


}

