char *string_copy(char *dest, const char *src)
{
/* iterate through dest and source */
int i;
i = 0;

while (src[i] != '\0')
{
  dest[i] = src[i];
  i = i + 1;
}
dest[i] = '\0';
return dest;
}
