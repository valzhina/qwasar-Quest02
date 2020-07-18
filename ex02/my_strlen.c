#include <stdio.h>

int my_strlen(char* param_1) {

        int i = 0;
        while (param_1[i] != '\0')
                i++;
        return (i);
}       
/*
int     main() {
        
        char* word_0 = "abc";
        char* word_1 = "RaInB0w d4Sh!";
        char* word_2 = "ThE C4k3 Is a L|3";

        printf("abc -> %d letters\n", my_strlen(word_0));
        printf("RaInB0w d4Sh! -> %d letters\n", my_strlen(word_1));
        printf("ThE C4k3 Is a L|3 -> %d letters\n", my_strlen(word_2));
}       
*/