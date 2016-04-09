#include <stdio.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int op_null(int a, int b);
  int k;
  int l;
int (*get_op_func(char c))(int k, int l) {
  int i;
  char operators[5] = {'+', '-', '*', '/', '%'};
  int (*functions[])(int, int) = {op_add, op_sub, op_mul, op_div, op_mod};
  for (i = 0; i < 5; i++) {
    if (c == operators[i]) {
      return (*functions[i]);
    }

  }
  return (0);
}
