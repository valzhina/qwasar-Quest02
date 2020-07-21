#include <stdio.h>
#include <string.h>

char* my_capitalize(char* param_1)
{
	char* param_2;
    int first_word = 0;

	param_2 = param_1;
   
	while (*param_1 != '\0' && (*param_1 == '\t' || *param_1 == ' ' || *param_1 == '\n' || *param_1 == '\f' 
        || *param_1 == '\r' || *param_1 == '\v'))
   // while (*param_1 != '\0' && *param_1 == ' ')
        param_1++;
    while (*param_1 != '\0') {
        if ((*param_1 >= 97 && *param_1 <= 122) && (first_word == 0)) {
            *param_1 = *param_1 - 32;
        }
        
        else if ((*param_1 >= 65 && *param_1 <= 90) && (first_word == 1)) {
            *param_1 = *param_1 + 32;
        }
        param_1++;
        first_word = 1;
	}
	return (param_2);
}
/*
int	main() {
	
	//char* a = strdup(" \t AbcE Fgef1");
    char* a = strdup("  AbcE Fgef1");


	printf("RANDOM CASE -> %s\n", a);
	printf("CAPITALIZE  -> %s", my_capitalize(a));
	return (0);
}
*/