int str_len(char *s)
/* While str[i} is not equal to 0, increase i as a counter
 * of length.  Return i
 */
{
  int i;
  i = 0;
  while (s[++i])
    ;
  return i;
}



  
