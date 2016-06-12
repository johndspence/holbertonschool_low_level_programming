void print_hex(int num){
    long int decimalNumber,remainder,quotient;
    int i=1,j,temp;
    char hexadecimalNumber[100];
    while(num !=0){
         temp = quotient % 16;

      //To convert integer into character
      if( temp < 10)
           temp =temp + 48;
      else
         temp = temp + 55;

      hexadecimalNumber[i++]= temp;
      quotient = quotient / 16;
  }

    for(j = i -1 ;j> 0;j--)
      print_char("%c",hexadecimalNumber[j]);

    return 0;
}
