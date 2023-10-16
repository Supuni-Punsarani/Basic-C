#include<stdio.h>

int backnotes(int A,int B,int S,int N){

     int X;                 //X-NUMBER OF A BANKNOTES
     if(A!=B){              //IF A IS NOT EQUAL TO B,THEN PROGRAM WILL EXCUTE
        X=(S-(B*N))/(A-B);  //IF Y IS NUMBER OF B BANKNOTES THEN X+Y=N AND A*X+B*Y=S

     if(X<0)                //CHECK VAKUE OF X
       X=-1;
      printf("%d",X);
     }


            //DISPLAY NUMBER OF A BANKNOTES

}

void main(){

  int A,B,S,N;                        //A-VALLUE OF A DOLLAR,B-VALUE OF B DOLLAR,S-TOTAL AMOUNT,N-NUMBER OF BANKNOTES

  scanf("%d %d %d %d",&A,&B,&S,&N);  //GET VALLUES FOR A,B,S,N

  backnotes(A,B,S,N);                //CALL THE FUNCTION backnotes


   }

