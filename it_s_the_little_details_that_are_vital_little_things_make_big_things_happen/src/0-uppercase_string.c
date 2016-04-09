/* Pass pointer to string array and move each char -32 places on ASCII table */
int i;
char *uppercase_string(char *s){
  for(i=0; (s[i] !='\0'); i++){
     if(s[i]>=97 && s[i]<=122)
      s[i]=s[i]-32;
 }
return(s);
}
