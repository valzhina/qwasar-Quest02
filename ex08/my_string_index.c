#include <stdio.h>

int my_string_index(char* param_1, char param_2)
{
	int i = 0;
	while (param_1[i] != '\0') {
		if (param_1[i] == param_2) {
        //printf("%d\n", i);
		return (i);
        }
		else 
			i++;
    }
    //printf("-1\n");
	return (-1);
}
/*
int	main() {

	char haystack_1 [10] = "hello";
	char needle_1 = 'l';
	my_string_index(haystack_1, needle_1);

    char haystack_2 [10] = "aaa";
	char needle_2 = 'l';
	my_string_index(haystack_2, needle_2);

	return (0);
}
*/
