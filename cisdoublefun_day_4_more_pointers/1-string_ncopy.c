char *string_ncopy(char *dest, const char *src, int n)
/* Iterate through destination and source strings
 * replacing destination with source at each [i] */
{
  int i;
  i = 0;
  while (i < n)
  {
    dest[i] = src[i];
    i = i + 1;
  }
return dest;
}
