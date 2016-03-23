char *rot13(char *s){
  for(int i=0; (s[i] !='\0'); i++){
      // Rotation algorithm +13 or -13 depending on where in the alphabet
      if (s[i] >= 65 && s[i] <= 77){
          s[i]=s[i]+13;
        }
      else if (s[i] >= 78 && s[i] <= 90){
          s[i]=s[i]-13;
        }
      else if (s[i] >= 97 && s[i] <= 109){
          s[i]=s[i]+13;
        }
      else if (s[i] >= 110 && s[i] <= 122){
          s[i]=s[i]-13;
        }
  }
  return(s);
}
