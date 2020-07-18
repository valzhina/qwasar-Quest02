#include <stdio.h>

void my_swap(int* param_1, int* param_2)
{
    int swap_spot;

    swap_spot = *param_1;
    *param_1 = *param_2;
    *param_2 = swap_spot;

}

/*int main() {
  int variable_a = 12;
  int variable_b = 21;

  printf("A - %d ** B - %d\n", variable_a, variable_b); // will print A - 12 ** B - 21
  my_swap(&variable_a, &variable_b);
  printf("A - %d ** B - %d", variable_a, variable_b); // will print A - 21 ** B - 12
  return 0;
}*/
