int print_char(char c);

/* Function expects pointer to char as parameter, over
 * which it iterates, printing each char
 */
void print_string(char *str)
{
  int i;
  i = 0;
  while (str[i] != '\0')
  {
    print_char(str[i]);
    i++;
  }
}
