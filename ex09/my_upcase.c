#include <stdio.h>
#include <string.h>

char* my_upcase(char* param_1)
{
    char* param_2; 

    param_2 = param_1;
    //printf("address param2: %p\naddress param1: %p\n", param_2, param_1);
	while (*param_1 != '\0') {

		if (*param_1 >= 97 && *param_1 <= 122) {
			*param_1 = *param_1 - 32;
			param_1++;
		}
		else
			param_1++;
		
	}

   // printf("\naddress param2: %p\naddress param1: %p\n", param_2, param_1);
	return (param_2);
}

/*
char* my_upcase(char* param_1)
{
    int i = 0;
	while (param_1[i] != '\0') {

		if (param_1[i] >= 97 && param_1[i] <= 122) {
			param_1[i] = param_1[i] - 32;
			i++;
		}
		else
			i++;
		
	}

	return (param_1);
}

int main() {
  char *my_str = strdup("AbcE Fgef1");
  //char *my_str = strdup("");

  printf("RANDOM CASE -> %s\n", my_str);
  printf("UPCASE      -> %s\n", my_upcase(my_str));
  return 0;
}
*/