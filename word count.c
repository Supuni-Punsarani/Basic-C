#include <stdio.h>
#include <stdbool.h>

/*int countWords(const char *str) {
    int count = 0;
    bool inWord = false; // To track if we are inside a word

    // Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r') {
            // If a space is encountered, check if we were inside a word
            if (inWord) {
                count++;
                inWord = false;
            }
        } else {
            // If a non-space character is encountered, we are inside a word
            inWord = true;
        }
    }

    // Check for the last word if the string doesn't end with a space
    if (inWord) {
        count++;
    }

    return count;
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int wordCount = countWords(str);

    printf("Number of words: %d\n", wordCount);

    return 0;
}*/

void main(){
 char s[50]="sdfpiugw mdfovpw vwvfpwf";
 int count=1;
 for(int i=0;s[i]!='\0';i++){
    if(s[i]==' '){
        count++;
    }
 }
 printf("count is:%d",count);}

