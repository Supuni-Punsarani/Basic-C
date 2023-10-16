#include <stdio.h>
#include <string.h>

void areAnagrams(char str1[], char str2[]) {
    // Get the lengths of both strings
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If the lengths are different, the strings cannot be anagrams
    if (len1 != len2) {
       printf("not");
    }
   else{
    // Initialize an array to count the occurrences of each character
    int count[256]={0};

    // Count characters in the first string
    for (int i = 0; i < len1; i++) {
        count[str1[i]]++;
    }

    // Decrement counts for characters in the second string
    for (int i = 0; i < len2; i++) {
        count[str2[i]]--;
    }

    // If all counts are zero, the strings are anagrams
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
           printf("not");
        }
    }
        printf("anagram");



  }

}

void main() {
    char str1[] = "listen";
    char str2[] = "silent";

    areAnagrams(str1,str2);
}
