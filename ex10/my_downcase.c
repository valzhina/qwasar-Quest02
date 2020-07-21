#include <stdio.h>
#include <string.h>

char*  my_downcase(char* param_1) {

	char* param_2;

	param_2 = param_1;
	while (*param_1 != '\0') {
		if (*param_1 >= 65 && *param_1 <= 90) {
        *param_1 = *param_1 + 32;
        param_1++;
        }
        else 
            param_1++;
	}
	return (param_2);
}
/*
int main() {
    char* a = strdup("DFghj*56BNhvbcf");

    printf("RANDOM CASE -> %s\n", a);
    printf("DOWNCASE    -> %s", my_downcase(a));
    return (0);
    }
*/