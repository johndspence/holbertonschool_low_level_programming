char *cap_string(char *s){
  for(int i=0; (s[i] !='\0'); i++){
    // Capitalize First char of the string array
    if (s[i] == s[0]){
    s[i]=s[i]-32;
    };
    // Capitalize after space
    if (s[i] == ' '){
      s[i+1]=s[i+1]-32;
    };
    // Capitalize after tab
    if (s[i] == '\t'){
      s[i+1]=s[i+1]-32;
    };
    //new line
    if (s[i] == '\n'){
      s[i+1]=s[i+1]-32;
    };

    //if(s[i]>=97 && s[i]<=122){
    //}
  }
  return(s);
}
