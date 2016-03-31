int power(int x, int y){
  /* If negative return -1, by requirement */
  if ((x < 0) || (y < 0)) {
    return(-1);
  }
  /* If negative return -1, by requirement */
  else if(y == 0) {
    return(1);
  }
  /* A number raised to 1 is that number */
  else if(y == 1) {
    return(x);
  }
  /* Otherwise multiply the number by itself recursively y times */
  else {
    return(x * power(x, y-1));
    }
return(x);
}
