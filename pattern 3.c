#include <stdio.h>

int main() {
    int rows = 12;
    int cols = 12;
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if ((i == 0 || i==10) && (j == 4 || j==5 || j==6 || j==7)) {
                printf("*");
            }
            else if((i==1 || i==9)  && (j==2 || j==3 || j==8 || j==9)){
                printf("*");
            }
            else if((i==2 || i==8) && (j==1 || j==10))
            {
                printf("*");
            }
            else if((i>=3 && i<=7) && (j==0 || j==11))
            {
                printf("*");
            }

            else{
                printf(" ");
            }
        }
        printf("\n");
    }


}
