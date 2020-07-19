#include <stdio.h>
#include <unistd.h>

void my_putstr(char* param_1) {

    while (*param_1 != '\0') {
        write(1, param_1, 1);
        param_1++;
    }
}

/*
void    my_putchar(char c) {
     write(1, &c, 1);
}

void my_putstr(char* param_1) {

    while (*param_1 != '\0') {
        my_putchar(*param_1);
        param_1++;
    }
} 
*/
/*
void    my_putstr(char* param_1) {
    
    while (*param_1 != '\0') {  
        printf("%s", param_1);
        param_1++;
    }
} 

int	main() {

    char* str1  = "abc";
    char* str2 = "abcdelele dzp ll 0";
    char* str3 = " ";
    my_putstr(str1);
    write(1, "\n", 1);
    my_putstr(str2);
    write(1, "\n", 1);
    my_putstr(str3);

    return (0);
}
*/

