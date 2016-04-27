int print_char(char c);
void position3loop(int, int, char*);
void print_combination_3(void);

/* Final Printing Loop */
void position3loop(int pos1, int pos2, char* alldigits)
{
  int position1;
  int position2;
  int position3;

  position1 = pos1;
  position2 = pos2;
  position3 = pos2 + 1;
  while (position3 <= 9)
    {
      print_char(alldigits[position1]);
      print_char(alldigits[position2]);
      print_char(alldigits[position3]);
      print_char(',');
      print_char(' ');
      ++position3;
    }
}

/* Final Item Print */
void printfinal (void)
{
  print_char('7');
  print_char('8');
  print_char('9');
}

void print_combination_3(void)
{
int position1;
int position2;
char *alldigits;

alldigits = "0123456789";
position1 = 0;
position2 = 1;

/* Loop through position1 */
while (position1 < 7)
  {
  /* Loop through position2 from last value of position1+1 to 9 */
    position2 = position1 + 1;
    while (position2 <= 9)
    {
      position3loop(position1, position2, alldigits);
      position2++;
    }
    /* End of loop through position2; go back to position1 loop */
    position1++;
  }
  /* End of loop through position1; go back to position1 loop */
printfinal();
}
