char *cap_string(char *s){
  for(int i=0; (s[i] !='\0'); i++){

    // Capitalize First char of the string array
    if (s[i] == s[0]){
      if(s[i]>=97 && s[i]<=122){
        s[i]=s[i]-32;
      }
    }

    // Capitalize after space
    if (s[i] == ' '){
      if(s[i+1]>=97 && s[i+1]<=122){
        s[i+1]=s[i+1]-32;
      }
    }

    // Capitalize after tab
    if (s[i] == '\t'){
      if(s[i+1]>=97 && s[i+1]<=122){
      s[i+1]=s[i+1]-32;
      }
    }
    // Capitalize after new line
    if (s[i] == '\n'){
      if(s[i+1]>=97 && s[i+1]<=122){
        s[i+1]=s[i+1]-32;
      }
    }
  }
return(s);
}
